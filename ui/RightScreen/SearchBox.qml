import QtQuick 2.15
import QtQuick.Controls

Rectangle
{
    id: search_box
    color: "#AFAFAF"
    radius: 5

    Image{
        id: search_icon
        source: "qrc:/ui/Image/search.png"
        height: parent.height *.50
        fillMode: Image.PreserveAspectFit
        anchors{
            left: parent.left
            leftMargin: 15
            verticalCenter: parent.verticalCenter
        }
    }

    TextField{
        id: text_search
        color: "black"
        placeholderText: "Navigate"
        placeholderTextColor: "black"
        font.pointSize: 13
        anchors{
            verticalCenter: parent.verticalCenter
            left: search_icon.right
            leftMargin: 10
        }
        background: Rectangle {
            color: text_search.focus ? "#AFAFAF":"#AFAFAF"
            radius: 5
        }
        width: parent.width* 3/4
    }



}

