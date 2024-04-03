const express = require('express')
const router = express.Router()
const chatController =  require('../controllers/chat.controller');

// Retrieve all chats
router.get('/', chatController.findAll);
// Post a new chat
router.post('/', chatController.create);

module.exports = router
