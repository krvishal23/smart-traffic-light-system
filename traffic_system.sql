CREATE DATABASE traffic_system;

USE traffic_system;

CREATE TABLE traffic_data (
    id INT AUTO_INCREMENT PRIMARY KEY,
    lane1 INT,
    lane2 INT,
    lane3 INT,
    lane4 INT,
    timestamp DATETIME
);
