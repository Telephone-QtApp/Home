import QtQuick 2.15

Item {
    id: container
    property string sourceIcon: ""
    property string type: ""
    width: type === "small" ? 100 : 90
    height: type === "small" ? 100 : 90

    Image {
        anchors.fill: container
        source: sourceIcon
    }
}
