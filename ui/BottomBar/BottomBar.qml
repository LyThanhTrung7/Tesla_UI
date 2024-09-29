import QtQuick 2.15

Rectangle {
    id: bottomBar
    anchors{
        left: parent.left
        right: parent.right
        bottom: parent.bottom
    }

    color: "black"
    height: parent.height/10

    Image{
        id: icon_car
        anchors{
            left: parent.left
            leftMargin: 30
            verticalCenter: parent.verticalCenter
        }
        height: parent.height* .85
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/Image/Car_icon.png"
    }
    Image{
        id: icon_reduce1
        anchors{
            left: icon_car.right
            margins: 50
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .15
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/Image/left-arrow.png"
        MouseArea{
            anchors.fill: parent
            onClicked: bottomSystem.setTempValue(0)
        }
    }
    Text{
        id: temp_value
        text: bottomSystem.tempValue + "°"
        color: "white"
        anchors{
            left: icon_reduce1.right
            margins: 20
            verticalCenter: parent.verticalCenter
        }
        font.pixelSize: 25
        font.bold: true
    }

    Image{
        id: icon_plus1
        anchors{
            left: temp_value.right
            margins: 20
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .15
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/Image/right-arrow.png"
        MouseArea{
            anchors.fill: parent
            onClicked: bottomSystem.setTempValue(1)
        }
    }

    Image{
        id: icon_air1
        anchors{
            left: icon_plus1.right
            margins: 70
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .80
        fillMode: Image.PreserveAspectFit

        source: ( bottomSystem.typeAir ? "qrc:/ui/Image/air-not-conditioning.png" : "qrc:/ui/Image/air-conditioning.png")
        MouseArea{
            anchors.fill: parent
            onClicked: bottomSystem.setTypeAir(!bottomSystem.typeAir)
        }
    }

    Image{
        id: icon_call
        anchors{
            left: icon_air1.right
            margins: 120
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .80
        fillMode: Image.PreserveAspectFit

        source: "qrc:/ui/Image/icon_call.png"
    }
    Image{
        id: icon_blue
        anchors{
            left: icon_call.right
            margins: 50
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .70
        fillMode: Image.PreserveAspectFit

        source: "qrc:/ui/Image/icon_bluetooth.png"
    }
    Image{
        id: icon_music
        anchors{
            left: icon_blue.right
            margins: 50
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .60
        fillMode: Image.PreserveAspectFit

        source: "qrc:/ui/Image/icon_spotify.jpg"
    }
    Image{
        id: icon_setting
        anchors{
            left: icon_music.right
            margins: 50
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .60
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/Image/icon_setting.png"
    }
    Image{
        id: icon_fan
        anchors{
            left: icon_setting.right
            margins: 100
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .80
        fillMode: Image.PreserveAspectFit
        source: ( bottomSystem.typeFan ? "qrc:/ui/Image/fan_on.png" : "qrc:/ui/Image/fan.png")
        MouseArea{
            anchors.fill: parent
            onClicked: bottomSystem.setTypeFan(!bottomSystem.typeFan)
        }
    }

    Image{
        id: icon_reduce2
        anchors{
            left: icon_fan.right
            margins: 50
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .15
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/Image/left-arrow.png"
        MouseArea{
            anchors.fill: parent
            onClicked: bottomSystem.setTempValue(0)
        }
    }
    Text{
        id: temp_value1
        text: bottomSystem.tempValue + "°"
        color: "white"
        anchors{
            left: icon_reduce2.right
            margins: 20
            verticalCenter: parent.verticalCenter
        }
        font.pixelSize: 25
        font.bold: true
    }

    Image{
        id: icon_plus2
        anchors{
            left: temp_value1.right
            margins: 20
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .15
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/Image/right-arrow.png"
        MouseArea{
            anchors.fill: parent
            onClicked: bottomSystem.setTempValue(1)
        }
    }

    Image{
        id: icon_reduce3
        anchors{
            left: icon_plus2.right
            margins: 50
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .15
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/Image/left-arrow.png"
        MouseArea{
            anchors.fill: parent
            onClicked: bottomSystem.setAudioValue(0)
        }
    }
    Text{
        visible: !audioType
        id: audio_value
        text: bottomSystem.audioValue
        color: "white"
        anchors{
            left: icon_reduce3.right
            margins: 20
            verticalCenter: parent.verticalCenter
        }
        font.pixelSize: 25
        font.bold: true
    }

    Image{
        visible: audioType
        id: icon_audio
        anchors{
            left: icon_reduce3.right
            margins: 20
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .40
        fillMode: Image.PreserveAspectFit
        source: {
            if(bottomSystem.audioValue === 0) return "qrc:/ui/Image/audio_off.png"
            if(bottomSystem.audioValue >= 50) return "qrc:/ui/Image/audio_full.jpg"
            else return "qrc:/ui/Image/audio_medium.png"
        }
        MouseArea{
            anchors.fill: parent
            onClicked: bottomSystem.setTempValue(1)
        }
    }

    Image{
        id: icon_plus3
        anchors{
            left: audio_value.right
            margins: 20
            verticalCenter: parent.verticalCenter
        }

        height: parent.height* .15
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/Image/right-arrow.png"
        MouseArea{
            anchors.fill: parent
            onClicked: bottomSystem.setAudioValue(1)
        }
    }
}
