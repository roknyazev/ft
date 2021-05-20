mkdir /var/www/your_domain/phpmyadmin
wget https://files.phpmyadmin.net/phpMyAdmin/4.9.0.1/phpMyAdmin-4.9.0.1-all-languages.tar.gz
tar -xvf phpMyAdmin-4.9.0.1-all-languages.tar.gz --strip-components 1 -C /var/www/your_domain/phpmyadmin
mv ./phpmyadmin.inc.php ./tmp/phpmyadmin.inc.php
