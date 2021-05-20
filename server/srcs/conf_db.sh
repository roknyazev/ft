mysql -e "CREATE DATABASE wordpress DEFAULT CHARACTER SET utf8 COLLATE utf8_unicode_ci;"
mysql -e "GRANT ALL ON wordpress.* TO 'wordpress_user'@'localhost' IDENTIFIED BY '123456';"
mysql -e "FLUSH PRIVILEGES;"
