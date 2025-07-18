<?php
include 'db_config.php';

$lane1 = $_GET['lane1'];
$lane2 = $_GET['lane2'];
$lane3 = $_GET['lane3'];
$lane4 = $_GET['lane4'];

$sql = "INSERT INTO traffic_data (lane1, lane2, lane3, lane4, timestamp)
        VALUES ('$lane1', '$lane2', '$lane3', '$lane4', NOW())";
$conn->query($sql);
$conn->close();
?>
