FROM debian:buster


RUN apt-get update
RUN apt-get install nginx -y
RUN apt-get install nano 
RUN apt-get install mariadb-server -y
RUN apt-get install wget -y
RUN apt-get install php-fpm php-mysql php-curl php-gd php-intl php-mbstring php-soap php-xml php-xmlrpc php-zip -y
RUN apt-get install curl -y

COPY ./srcs/conf_nginx.sh ./
COPY ./srcs/nginx.conf ./

COPY ./srcs/your_domain ./

COPY ./srcs/conf_php.sh ./
COPY ./srcs/conf_db.sh ./
COPY ./srcs/phpmyadmin.inc.php ./

COPY ./srcs/conf_wp.sh ./
COPY ./srcs/wp-config.php ./

COPY ./srcs/autoindex.sh ./


COPY ./srcs/init.sh ./
CMD bash init.sh


EXPOSE 80 443
