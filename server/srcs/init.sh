bash conf_nginx.sh

service nginx start
service php7.3-fpm start
service mysql start

bash conf_db.sh
bash conf_php.sh
bash conf_wp.sh

service mysql reload
bash
