import QtQuick 2.15
import QtLocation 5.15
import QtPositioning 5.15


Rectangle{
    id: right_screen
    anchors{
        top: parent.top
        bottom: bottom_bar.top
        right: parent.right
    }
    width: parent.width *2/3

    Plugin {
        id: mapPlugin
        name: "osm"
        PluginParameter {
            name: "osm.mapping.providersrepository.address"
            value: "https://a.tile.openstreetmap.org"
        }
    }

    Map {
        id: map
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(10.803133340063047, 106.63837415540777) // HCM
        zoomLevel: 15
        property geoCoordinate startCentroid

        PinchHandler {
            id: pinch
            target: null
            onActiveChanged: if (active) {
                                 map.startCentroid = map.toCoordinate(pinch.centroid.position, false)
                             }
            onScaleChanged: (delta) => {
                                map.zoomLevel += Math.log2(delta)
                                map.alignCoordinateToPoint(map.startCentroid, pinch.centroid.position)
                            }
            onRotationChanged: (delta) => {
                                   map.bearing -= delta
                                   map.alignCoordinateToPoint(map.startCentroid, pinch.centroid.position)
                               }
            grabPermissions: PointerHandler.TakeOverForbidden
        }
        WheelHandler {
            id: wheel
            // workaround for QTBUG-87646 / QTBUG-112394 / QTBUG-112432:
            // Magic Mouse pretends to be a trackpad but doesn't work with PinchHandler
            // and we don't yet distinguish mice and trackpads on Wayland either
            acceptedDevices: Qt.platform.pluginName === "cocoa" || Qt.platform.pluginName === "wayland"
                             ? PointerDevice.Mouse | PointerDevice.TouchPad
                             : PointerDevice.Mouse
            rotationScale: 1/120
            property: "zoomLevel"
        }
        DragHandler {
            id: drag
            target: null
            onTranslationChanged: (delta) => map.pan(-delta.x, -delta.y)
        }
        Shortcut {
            enabled: map.zoomLevel < map.maximumZoomLevel
            sequence: StandardKey.ZoomIn
            onActivated: map.zoomLevel = Math.round(map.zoomLevel + 1)
        }
        Shortcut {
            enabled: map.zoomLevel > map.minimumZoomLevel
            sequence: StandardKey.ZoomOut
            onActivated: map.zoomLevel = Math.round(map.zoomLevel - 1)
        }
    }

    Image{
        id: lockIcon
        anchors{
            left: parent.left
            top: parent.top
            margins: 20
        }

        width: parent.width/30
        fillMode: Image.PreserveAspectFit
        source: ( systemHandler.carLocked ? "qrc:/ui/Image/lock.png" : "qrc:/ui/Image/lock_up.png")
        MouseArea{
            anchors.fill: parent
            onClicked: systemHandler.setCarLocked(!systemHandler.carLocked)
        }
    }

    Text{
        id: time
        anchors{
            left: lockIcon.right
            leftMargin: 20
            bottom: lockIcon.bottom
        }
        font.pixelSize: 15
        font.bold: true
        color: "black"
        text: systemHandler.currentTime
    }

    Text{
        id: temp
        anchors{
            left: time.right
            leftMargin: 20
            bottom: time.bottom
        }
        font.pixelSize: 15
        font.bold: true
        color: "black"
        text: systemHandler.outDoorTemp + "℃"
    }

    Image{
        id: iconUser
        anchors{
            left: temp.right
            bottom: temp.bottom
            leftMargin: 20
        }

        width: parent.width/30
        fillMode: Image.PreserveAspectFit
        source:"qrc:/ui/Image/user-account.png"
    }

    Text{
        id: user
        anchors{
            left: iconUser.right
            leftMargin: 5
            bottom: iconUser.bottom
        }
        font.pixelSize: 15
        font.bold: true
        color: "black"
        text: systemHandler.userName
    }

    SearchBox{
        id: searchBox
        width: parent.width* 1/3
        height: parent.height * 1/14
        anchors{
            left: lockIcon.left
            top: lockIcon.bottom
            topMargin: 10
        }

    }

}

