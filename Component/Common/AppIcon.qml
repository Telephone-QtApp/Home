import QtQuick 2.15

Item {
    id: container
    width: 115
    height: 115
    property string sourceIcon: ""

    Image {
        anchors.fill: container
        source: sourceIcon
    }
}
