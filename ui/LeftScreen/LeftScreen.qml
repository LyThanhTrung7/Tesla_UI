import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    id: left_screen
    anchors{
        left: parent.left
        right: right_screen.left
        bottom: bottom_bar.top
        top: parent.top
    }


    property int currentIndex: 0
    StackView {
        id: stackView
        anchors.fill: parent

        initialItem: Rectangle {
            Row{
                id: type_auto
                spacing: 5
                width: 63
                height: 22
                anchors{
                    top: parent.top
                    left: parent.left
                    margins: 5
                }
                Text{
                    text: "P"
                    font.pointSize: 10
                    font.bold: true
                }
                Text{
                    text: "R"
                    font.pointSize: 10
                }
                Text{
                    text: "N"
                    font.pointSize: 10
                }
                Text{
                    text: "D"
                    font.pointSize: 10
                }
            }
            Row{
                id: battery
                spacing: 10
                y: 10
                anchors{
                    margins: 10
                    right: parent.right
                    top: parent.right
                }
                Text{
                    id: value_battery
                    text: "70%"
                    font.pointSize: 11
                }
                Image{
                    id: icon_battery
                    height: 20
                    fillMode: Image.PreserveAspectFit
                    source:"qrc:/ui/Image/icon_battery.png"
                }
            }
            Image{
                id:car_type
                y: 100
                anchors{
                    leftMargin: 10
                    left: parent.left
                }
                height: 100
                fillMode: Image.PreserveAspectFit
                source:"qrc:/ui/Image/type_car.jpg"
            }

            Image{
                id: img_car
                anchors.centerIn: parent
                width: parent.width* .75
                fillMode: Image.PreserveAspectFit
                source: "qrc:/ui/Image/car.png"
            }
            Image{
                id: lockIcon
                y: 170
                anchors.horizontalCenter: parent.horizontalCenter
                width: 25
                fillMode: Image.PreserveAspectFit
                source: ( systemHandler.carLocked ? "qrc:/ui/Image/lock.png" : "qrc:/ui/Image/lock_up.png")
                MouseArea{
                    anchors.fill: parent
                    onClicked: systemHandler.setCarLocked(!systemHandler.carLocked)
                }
            }
            Image{
                id: icon_next
                anchors{
                    right: parent.right
                    verticalCenter: parent.verticalCenter
                }
                width: 46
                height: 46
                source: "qrc:/ui/Image/next-button.png"
                MouseArea{
                    anchors.fill: parent
                    onClicked:{
                        stackView.push(slide2);
                        currentIndex =1;
                    }
                }
            }
        }
    }

    Component {
        id: slide2
        Rectangle {
            Image{
                id: icon_pre
                width: 46
                height: 46
                anchors{
                    left: parent.left
                    verticalCenter: parent.verticalCenter
                }
                source: "qrc:/ui/Image/pre-button.png"
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        stackView.pop();
                        currentIndex = 0;  // Cập nhật index
                    }
                }
            }
            Image{
                id: seatbelt
                anchors{
                    top: parent.top
                    left:parent.left
                    margins: 10
                }
                width: 40
                fillMode: Image.PreserveAspectFit
                source: "qrc:/ui/Image/Seatbelt.png"
            }
            Image{
                id: headlight2
                anchors{
                    top:parent.top
                    right:parent.right
                    margins: 10
                }
                width: 40
                fillMode: Image.PreserveAspectFit
                source: "qrc:/ui/Image/Headlight2.png"
            }
            Text{
                id: value_MPH
                text: "30"
                font.pointSize: 20
                font.bold: true
                anchors.horizontalCenter: parent.horizontalCenter
                y: 40
            }
            Row{
                id: type_auto
                spacing: 5
                width: 63
                height: 22
                y: 70
                anchors{
                    left: parent.left
                    margins: 5
                }
                Text{
                    text: "P"
                    font.pointSize: 10
                }
                Text{
                    text: "R"
                    font.pointSize: 10
                }
                Text{
                    text: "N"
                    font.pointSize: 10
                }
                Text{
                    text: "D"
                    font.pointSize: 10
                    font.bold: true
                }
            }
            Text{
                text:"MPH"
                y: 70
                anchors.horizontalCenter: parent.horizontalCenter
                color: "#A2A3A5"
            }
            Rectangle {
                y: 100
                width: parent.width
                height: 2
                color: "black"
            }
            Row{
                id: battery
                spacing: 10
                y: 70
                anchors{
                    margins: 10
                    right: parent.right
                    top: parent.right
                }
                Text{
                    id: value_battery
                    text: "70%"
                    font.pointSize: 11
                }
                Image{
                    id: icon_battery
                    height: 20
                    fillMode: Image.PreserveAspectFit
                    source:"qrc:/ui/Image/icon_battery.png"
                }
            }
            Image {
                id: screen2
                anchors.centerIn: parent
                width: 150
                fillMode: Image.PreserveAspectFit
                source: "qrc:/ui/Image/screen.jpg"
            }
            Row{
                id: note_car
                spacing: 20
                anchors{
                    horizontalCenter: parent.horizontalCenter
                    margins: 20
                    top: screen2.bottom
                }
                Image{
                    width: 20
                    fillMode: Image.PreserveAspectFit
                    source: "qrc:/ui/Image/navigation.png"
                }
                Image{
                    width: 20
                    fillMode: Image.PreserveAspectFit
                    source: "qrc:/ui/Image/power.png"
                }
            }
        }
    }

    Row {
        id: point_2
        spacing: 10
        anchors{
            bottom: parent.bottom
            horizontalCenter: parent.horizontalCenter
            bottomMargin: 10
        }
        Repeater {
            model: 2
            delegate: Rectangle {
                width: 8
                height: 8
                radius: 6
                color: index === currentIndex ? "black" : "lightgray"
                border.color: "black"
            }
        }
    }
}
