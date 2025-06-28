import QtQuick

import QtQuick.Controls

Rectangle {
    id: root
    property string name: ""
    property real value: 0
    property bool enabled: true
    property color aggregatorColor: "lightgray"

    width: 120
    height: 60
    radius: 6
    color: enabled ? root.aggregatorColor : "#aaaaaa"

    CheckBox {
        id: check
        anchors.left: parent.left
        anchors.top: parent.top
        checked: root.enabled
        onCheckedChanged: root.enabled = checked
    }

    Text {
        id: nameLabel
        anchors.centerIn: parent
        text: root.name + ": " + root.value
        color: "black"
    }

}
