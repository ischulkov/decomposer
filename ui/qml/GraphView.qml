import QtQuick

import QtQuick.Controls
import LogicGraph

Item {
    width: 400
    height: 300

    ListModel {
        id: nodesModel
        ListElement { name: "A"; value: 1; color: "#8fc9ff"; enabled: true }
        ListElement { name: "B"; value: 2; color: "#a8ffa8"; enabled: true }
        ListElement { name: "C"; value: 3; color: "#ffcf9f"; enabled: true }
    }

    Repeater {
        model: nodesModel
        delegate: NodeItem {
            name: model.name
            value: model.value
            enabled: model.enabled
            color: model.color
            x: index * 140
            y: 50
        }
    }

}
