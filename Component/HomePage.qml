import QtQuick 2.15
import QtQuick.Controls 2.15
import './Common'

Image {
    id: myImage
    width: 700; height: 1100
    source: "qrc:/Assets/background.jpg"

    GridView {
        id: grid
        model: 24
        width: 600
        height: 900
        anchors.left: myImage.left
        anchors.leftMargin: 50
        anchors.fill: parent
        cellWidth: 150; cellHeight: 150
        boundsBehavior: Flickable.StopAtBounds
        delegate: Item {
            id: item
            width: grid.cellWidth
            height: grid.cellHeight
            AppIcon {
                id: img
                anchors.centerIn: parent
                sourceIcon: "qrc:/Assets/phone.png"
            }
            Text {
                anchors.top: img.bottom
                anchors.horizontalCenter: parent.horizontalCenter
                color: '#fff'
                anchors.topMargin: 5
                text: "Phone" // Hiển thị chỉ số của phần tử
            }
        }
    }
}
