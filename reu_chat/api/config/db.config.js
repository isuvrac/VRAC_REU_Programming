'use strict';
const mysql = require('mysql');

//local mysql db connection
const dbConn = mysql.createConnection({
  host     : 'nicks-mac.vrac.iastate.edu',
  user     : 'reu',
  password : 'reumysqldatabase24',
  database : 'reuchat'
});

// connect to database
dbConn.connect(function(err) {
  if (err) throw err;
  console.log("Database Connected!");
});

// expose dbConn
module.exports = dbConn;
