import QtQuick 2.15

Item {
    id: container
    property string sourceIcon: ""
    width: 100
    height: 100

    Image {
        anchors.fill: container
        source: sourceIcon
    }
}
