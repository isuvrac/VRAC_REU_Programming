'use strict';
var dbConn = require('../config/db.config');

// Chat object constructor
var Chat = function(chat) {
  this.chat = chat.chat;
};

Chat.create = function (newChat, result) {
    dbConn.query("INSERT INTO chats set ?", newChat, function (err, res) {
        if(err) {
            console.log("error: ", err);
            result(err, null);
        } else {
            console.log("Chat added ", "(", res.insertId, "): ", newChat.chat);
            result(null, res.insertId);
        }
    });
};

Chat.findAll = function (result) {
    dbConn.query("Select * from chats", function (err, res) {
        if(err) {
            console.log("error: ", err);
            result(null, err);
        }
        else{
            result(null, res);
        }
    });
};

module.exports = Chat;