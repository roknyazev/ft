rm /etc/nginx/nginx.conf
mv ./nginx.conf /etc/nginx/nginx.conf
mkdir /var/www/your_domain
chown -R $USER:$USER /var/www/your_domain
mv ./your_domain /etc/nginx/sites-available/
ln -s /etc/nginx/sites-available/your_domain /etc/nginx/sites-enabled/
rm /etc/nginx/sites-available/default
mkdir /etc/nginx/ssl
openssl req -x509 -nodes -days 3650 -newkey rsa:2048 -keyout /etc/nginx/ssl/nginx.key -out /etc/nginx/ssl/nginx.crt -subj "/C=RU/ST=Moscow/l=Moscow/O=21school/CN=wrudy"
