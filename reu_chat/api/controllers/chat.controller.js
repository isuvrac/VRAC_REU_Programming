'use strict';
const Chat = require('../models/chat.model');

exports.create = function(req, res) {
    const new_chat = new Chat(req.body);

    //handles null error
    if(req.body.constructor === Object && Object.keys(req.body).length === 0){
      res.status(400).send({ error:true, message: 'Please provide all required field' });
    } else {
        Chat.create(new_chat, function(err, chat) {
            if (err) {
                res.send(err);
            } else {
                res.send("200");
            }
        });
    }
};

exports.findAll = function(req, res) {
    Chat.findAll(function(err, chat) {
        if (err) {
            res.send(err);
        } else {
            // Get ip from request
            var ip = req.connection.remoteAddress;
            console.log("Chats fetched from ", ip);

            var chats = [];
            for (var i = 0; i < chat.length; i++) {
                chats.push(chat[i].chat);
            }
            res.send(chats.join(','));
        }
    });
};
