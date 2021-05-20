cd /tmp
curl -LO https://wordpress.org/latest.tar.gz
tar xzvf latest.tar.gz
cp /tmp/wordpress/wp-config-sample.php /tmp/wordpress/wp-config.php
cp -a /tmp/wordpress/. /var/www/your_domain
chown -R www-data:www-data /var/www/your_domain
rm /var/www/your_domain/wp-config.php
cd /
mv ./wp-config.php ./var/www/your_domain/
