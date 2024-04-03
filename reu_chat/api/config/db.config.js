'use strict';
const mysql = require('mysql');

//local mysql db connection
const dbConn = mysql.createConnection({
  host     : '10.24.221.149',
  user     : 'reu',
  password : 'reupassword!2023',
  database : 'reuchatdb'
});

// connect to database
dbConn.connect(function(err) {
  if (err) throw err;
  console.log("Database Connected!");
});

// expose dbConn
module.exports = dbConn;
