import QtQuick 2.15
import QtQuick.Window 2.15
import "ui/BottomBar"
import "ui/RightScreen"
import "ui/LeftScreen"
Window {
    width: 1280
    height: 640
    visible: true
    title: qsTr("Tesla UI")

    property bool audioType: true

    Connections {
        target: bottomSystem
        onAudioValueChanged: {
            audioType = false
            timer_audio.start()
        }
    }

    Timer{
        id: timer_audio
        interval: 2000
        repeat: false
        onTriggered: {
            audioType = true;
        }
    }

    LeftScreen{
        id: left_screen

    }
    RightScreen{
        id: right_screen

    }

    BottomBar{
        id: bottom_bar
    }

}

