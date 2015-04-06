<?php
/**
 * @file
 * publicize_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function publicize_core_menu_default_menu_links() {
  $menu_links = array();
  // Exported menu link: menu-social-menu_facebook:http://facebook.com
  $menu_links['menu-social-menu_facebook:http://facebook.com'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'http://facebook.com',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fi-social-facebook',
          1 => 'social-menu-block-item',
          2 => 'left',
        ),
      ),
      'identifier' => 'menu-social-menu_facebook:http://facebook.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_mail:http://google.com
  $menu_links['menu-social-menu_mail:http://google.com'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'http://google.com',
    'router_path' => '',
    'link_title' => 'Mail',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fi-mail',
          1 => 'social-menu-block-item',
          2 => 'left',
        ),
      ),
      'identifier' => 'menu-social-menu_mail:http://google.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_pinterest:https://www.pinterest.com/
  $menu_links['menu-social-menu_pinterest:https://www.pinterest.com/'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://www.pinterest.com/',
    'router_path' => '',
    'link_title' => 'Pinterest',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fi-social-pinterest',
          1 => 'social-menu-block-item',
          2 => 'left',
        ),
      ),
      'identifier' => 'menu-social-menu_pinterest:https://www.pinterest.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_twitter:https://twitter.com/
  $menu_links['menu-social-menu_twitter:https://twitter.com/'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://twitter.com/',
    'router_path' => '',
    'link_title' => 'twitter',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fi-social-twitter',
          1 => 'social-menu-block-item',
          2 => 'left',
        ),
      ),
      'identifier' => 'menu-social-menu_twitter:https://twitter.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_vimeo:https://vimeo.com/
  $menu_links['menu-social-menu_vimeo:https://vimeo.com/'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://vimeo.com/',
    'router_path' => '',
    'link_title' => 'Vimeo',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fi-social-vimeo',
          1 => 'social-menu-block-item',
          2 => 'left',
        ),
      ),
      'identifier' => 'menu-social-menu_vimeo:https://vimeo.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: navigation_semantic-views-demo:semantic-views-demo
  $menu_links['navigation_semantic-views-demo:semantic-views-demo'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'semantic-views-demo',
    'router_path' => 'semantic-views-demo',
    'link_title' => 'Semantic Views demo',
    'options' => array(
      'identifier' => 'navigation_semantic-views-demo:semantic-views-demo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: user-menu_add-blog-post:node/add/blog-post
  $menu_links['user-menu_add-blog-post:node/add/blog-post'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/blog-post',
    'router_path' => 'node/add/blog-post',
    'link_title' => 'Add Blog Post',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'button',
          1 => 'tiny',
        ),
      ),
      'identifier' => 'user-menu_add-blog-post:node/add/blog-post',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_add-course:node/add/course
  $menu_links['user-menu_add-course:node/add/course'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/course',
    'router_path' => 'node/add/course',
    'link_title' => 'Add Course',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'button',
          1 => 'tiny',
        ),
      ),
      'identifier' => 'user-menu_add-course:node/add/course',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_add-project:node/add/design
  $menu_links['user-menu_add-project:node/add/design'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/design',
    'router_path' => 'node/add/design',
    'link_title' => 'Add Project',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'button',
          1 => 'tiny',
        ),
      ),
      'identifier' => 'user-menu_add-project:node/add/design',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_all-content:admin/content
  $menu_links['user-menu_all-content:admin/content'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'All Content',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'button',
          1 => 'tiny',
        ),
      ),
      'identifier' => 'user-menu_all-content:admin/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'button',
          1 => 'tiny',
        ),
      ),
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'button',
          1 => 'tiny',
        ),
      ),
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Blog Post');
  t('Add Course');
  t('Add Project');
  t('All Content');
  t('Blog');
  t('Courses');
  t('Facebook');
  t('Log out');
  t('Mail');
  t('Pinterest');
  t('Projects');
  t('Semantic Views demo');
  t('Team');
  t('User account');
  t('Vimeo');
  t('Work');
  t('Work with us');
  t('twitter');


  return $menu_links;
}
