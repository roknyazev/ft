<?php
/**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the
 * installation. You don't have to use the web site, you can
 * copy this file to "wp-config.php" and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * MySQL settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://wordpress.org/support/article/editing-wp-config-php/
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define( 'DB_NAME', 'wordpress' );

/** MySQL database username */
define( 'DB_USER', 'wordpress_user' );

/** MySQL database password */
define( 'DB_PASSWORD', '123456' );

/** MySQL hostname */
define( 'DB_HOST', 'localhost' );

/** Database Charset to use in creating database tables. */
define( 'DB_CHARSET', 'utf8' );

/** The Database Collate type. Don't change this if in doubt. */
define( 'DB_COLLATE', '' );

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 * 
 */
    define('AUTH_KEY',         'G]:<8$|157++zv.G#eY,GZ)xe$O++?cb@z0vxPf.~IRulOp7*KF dcx8vl~2@Eq:');
    define('SECURE_AUTH_KEY',  'c<[dY%7xm%xL8IKNS@wn_4f/asMRqm#vL?F2o?a`:%Pt!TaYX+NT=w-,Z-@jX15S');
    define('LOGGED_IN_KEY',    'IQ=(G$Z=p(-e=K=}(N3AxWDp}uSs?l%|FIOz^(,~G[-X_m$Z[MKi^.unKyJ++@8-');
    define('NONCE_KEY',        'Kh+neP493zM7%0u0-fK):TSr*PTEgCo;Heq4wa0[W?Iw2~.eE&Y%=BT$[pjolZo-');
    define('AUTH_SALT',        '.nmGO-ri!4} d,y%76-]>et).[|/Aexb)*-#Se|]b&Xi`x=1+HS~-qaE0qY~i=Jl');
    define('SECURE_AUTH_SALT', 'W9Q6,8]VL[b<sz-gl$l_FJif<-mr-Vy}WF_cv&8l#qP7$1=aH fI#iJ&)L/e(pQ_');
    define('LOGGED_IN_SALT',   '2F~RTQbq<y+RyiKMyjI_GWC9$n-#U72])-m4qby.4UgBl>2p&6J=NtD!S:_P+ZC ');
    define('NONCE_SALT',       '-++oyaaJ*cE<kdP)m-$nQ}=cZ*RDE4`gtG*Hv+<dLx.tN#jvMXK|>ycAX`_bV|u&');

    $table_prefix = 'wp_';

    define( 'WP_DEBUG', false );

/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
    if ( ! defined( 'ABSPATH' ) ) {
        define( 'ABSPATH', __DIR__ . '/' );
    }

/** Sets up WordPress vars and included files. */
	require_once ABSPATH . 'wp-settings.php';
?>
