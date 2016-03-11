<?php
/**
 * @file
 * nefo_berechtigungen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nefo_berechtigungen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access nefo institutions'.
  $permissions['access nefo institutions'] = array(
    'name' => 'access nefo institutions',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'nefo',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer media oembed'.
  $permissions['administer media oembed'] = array(
    'name' => 'administer media oembed',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_oembed',
  );

  // Exported permission: 'administer media wysiwyg view mode'.
  $permissions['administer media wysiwyg view mode'] = array(
    'name' => 'administer media wysiwyg view mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_wysiwyg_view_mode',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nefo configuration'.
  $permissions['administer nefo configuration'] = array(
    'name' => 'administer nefo configuration',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'nefo',
  );

  // Exported permission: 'administer nefo institutions'.
  $permissions['administer nefo institutions'] = array(
    'name' => 'administer nefo institutions',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'nefo',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer owlcarousel settings'.
  $permissions['administer owlcarousel settings'] = array(
    'name' => 'administer owlcarousel settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'owlcarousel_ui',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer superfish'.
  $permissions['administer superfish'] = array(
    'name' => 'administer superfish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'superfish',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer taxonomy display'.
  $permissions['administer taxonomy display'] = array(
    'name' => 'administer taxonomy display',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_display',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass maxlength'.
  $permissions['bypass maxlength'] = array(
    'name' => 'bypass maxlength',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'maxlength',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create nefo_news content'.
  $permissions['create nefo_news content'] = array(
    'name' => 'create nefo_news content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_product_article content'.
  $permissions['create nefo_product_article content'] = array(
    'name' => 'create nefo_product_article content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_product_factsheet content'.
  $permissions['create nefo_product_factsheet content'] = array(
    'name' => 'create nefo_product_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_product_interview content'.
  $permissions['create nefo_product_interview content'] = array(
    'name' => 'create nefo_product_interview content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_product_literature_tip content'.
  $permissions['create nefo_product_literature_tip content'] = array(
    'name' => 'create nefo_product_literature_tip content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_product_opinion content'.
  $permissions['create nefo_product_opinion content'] = array(
    'name' => 'create nefo_product_opinion content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_product_press_release content'.
  $permissions['create nefo_product_press_release content'] = array(
    'name' => 'create nefo_product_press_release content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_product_report content'.
  $permissions['create nefo_product_report content'] = array(
    'name' => 'create nefo_product_report content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_product_study content'.
  $permissions['create nefo_product_study content'] = array(
    'name' => 'create nefo_product_study content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_product_workshop content'.
  $permissions['create nefo_product_workshop content'] = array(
    'name' => 'create nefo_product_workshop content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_slide_factsheet content'.
  $permissions['create nefo_slide_factsheet content'] = array(
    'name' => 'create nefo_slide_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_slide_opinion content'.
  $permissions['create nefo_slide_opinion content'] = array(
    'name' => 'create nefo_slide_opinion content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_slide_report content'.
  $permissions['create nefo_slide_report content'] = array(
    'name' => 'create nefo_slide_report content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nefo_slideshow content'.
  $permissions['create nefo_slideshow content'] = array(
    'name' => 'create nefo_slideshow content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any nefo_news content'.
  $permissions['delete any nefo_news content'] = array(
    'name' => 'delete any nefo_news content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_product_article content'.
  $permissions['delete any nefo_product_article content'] = array(
    'name' => 'delete any nefo_product_article content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_product_factsheet content'.
  $permissions['delete any nefo_product_factsheet content'] = array(
    'name' => 'delete any nefo_product_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_product_interview content'.
  $permissions['delete any nefo_product_interview content'] = array(
    'name' => 'delete any nefo_product_interview content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_product_literature_tip content'.
  $permissions['delete any nefo_product_literature_tip content'] = array(
    'name' => 'delete any nefo_product_literature_tip content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_product_opinion content'.
  $permissions['delete any nefo_product_opinion content'] = array(
    'name' => 'delete any nefo_product_opinion content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_product_press_release content'.
  $permissions['delete any nefo_product_press_release content'] = array(
    'name' => 'delete any nefo_product_press_release content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_product_report content'.
  $permissions['delete any nefo_product_report content'] = array(
    'name' => 'delete any nefo_product_report content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_product_study content'.
  $permissions['delete any nefo_product_study content'] = array(
    'name' => 'delete any nefo_product_study content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_product_workshop content'.
  $permissions['delete any nefo_product_workshop content'] = array(
    'name' => 'delete any nefo_product_workshop content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_slide_factsheet content'.
  $permissions['delete any nefo_slide_factsheet content'] = array(
    'name' => 'delete any nefo_slide_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_slide_opinion content'.
  $permissions['delete any nefo_slide_opinion content'] = array(
    'name' => 'delete any nefo_slide_opinion content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_slide_report content'.
  $permissions['delete any nefo_slide_report content'] = array(
    'name' => 'delete any nefo_slide_report content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nefo_slideshow content'.
  $permissions['delete any nefo_slideshow content'] = array(
    'name' => 'delete any nefo_slideshow content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own nefo_news content'.
  $permissions['delete own nefo_news content'] = array(
    'name' => 'delete own nefo_news content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_product_article content'.
  $permissions['delete own nefo_product_article content'] = array(
    'name' => 'delete own nefo_product_article content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_product_factsheet content'.
  $permissions['delete own nefo_product_factsheet content'] = array(
    'name' => 'delete own nefo_product_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_product_interview content'.
  $permissions['delete own nefo_product_interview content'] = array(
    'name' => 'delete own nefo_product_interview content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_product_literature_tip content'.
  $permissions['delete own nefo_product_literature_tip content'] = array(
    'name' => 'delete own nefo_product_literature_tip content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_product_opinion content'.
  $permissions['delete own nefo_product_opinion content'] = array(
    'name' => 'delete own nefo_product_opinion content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_product_press_release content'.
  $permissions['delete own nefo_product_press_release content'] = array(
    'name' => 'delete own nefo_product_press_release content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_product_report content'.
  $permissions['delete own nefo_product_report content'] = array(
    'name' => 'delete own nefo_product_report content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_product_study content'.
  $permissions['delete own nefo_product_study content'] = array(
    'name' => 'delete own nefo_product_study content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_product_workshop content'.
  $permissions['delete own nefo_product_workshop content'] = array(
    'name' => 'delete own nefo_product_workshop content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_slide_factsheet content'.
  $permissions['delete own nefo_slide_factsheet content'] = array(
    'name' => 'delete own nefo_slide_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_slide_opinion content'.
  $permissions['delete own nefo_slide_opinion content'] = array(
    'name' => 'delete own nefo_slide_opinion content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_slide_report content'.
  $permissions['delete own nefo_slide_report content'] = array(
    'name' => 'delete own nefo_slide_report content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nefo_slideshow content'.
  $permissions['delete own nefo_slideshow content'] = array(
    'name' => 'delete own nefo_slideshow content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in event_types'.
  $permissions['delete terms in event_types'] = array(
    'name' => 'delete terms in event_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in nefo_schlagworte'.
  $permissions['delete terms in nefo_schlagworte'] = array(
    'name' => 'delete terms in nefo_schlagworte',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in nefo_taxonomy_blogs'.
  $permissions['delete terms in nefo_taxonomy_blogs'] = array(
    'name' => 'delete terms in nefo_taxonomy_blogs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in nefo_taxonomy_interview'.
  $permissions['delete terms in nefo_taxonomy_interview'] = array(
    'name' => 'delete terms in nefo_taxonomy_interview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in nefo_taxonomy_news'.
  $permissions['delete terms in nefo_taxonomy_news'] = array(
    'name' => 'delete terms in nefo_taxonomy_news',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in nefo_taxonomy_tags'.
  $permissions['delete terms in nefo_taxonomy_tags'] = array(
    'name' => 'delete terms in nefo_taxonomy_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any nefo_news content'.
  $permissions['edit any nefo_news content'] = array(
    'name' => 'edit any nefo_news content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_product_article content'.
  $permissions['edit any nefo_product_article content'] = array(
    'name' => 'edit any nefo_product_article content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_product_factsheet content'.
  $permissions['edit any nefo_product_factsheet content'] = array(
    'name' => 'edit any nefo_product_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_product_interview content'.
  $permissions['edit any nefo_product_interview content'] = array(
    'name' => 'edit any nefo_product_interview content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_product_literature_tip content'.
  $permissions['edit any nefo_product_literature_tip content'] = array(
    'name' => 'edit any nefo_product_literature_tip content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_product_opinion content'.
  $permissions['edit any nefo_product_opinion content'] = array(
    'name' => 'edit any nefo_product_opinion content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_product_press_release content'.
  $permissions['edit any nefo_product_press_release content'] = array(
    'name' => 'edit any nefo_product_press_release content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_product_report content'.
  $permissions['edit any nefo_product_report content'] = array(
    'name' => 'edit any nefo_product_report content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_product_study content'.
  $permissions['edit any nefo_product_study content'] = array(
    'name' => 'edit any nefo_product_study content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_product_workshop content'.
  $permissions['edit any nefo_product_workshop content'] = array(
    'name' => 'edit any nefo_product_workshop content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_slide_factsheet content'.
  $permissions['edit any nefo_slide_factsheet content'] = array(
    'name' => 'edit any nefo_slide_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_slide_opinion content'.
  $permissions['edit any nefo_slide_opinion content'] = array(
    'name' => 'edit any nefo_slide_opinion content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_slide_report content'.
  $permissions['edit any nefo_slide_report content'] = array(
    'name' => 'edit any nefo_slide_report content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nefo_slideshow content'.
  $permissions['edit any nefo_slideshow content'] = array(
    'name' => 'edit any nefo_slideshow content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any researcher profile'.
  $permissions['edit any researcher profile'] = array(
    'name' => 'edit any researcher profile',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own nefo_news content'.
  $permissions['edit own nefo_news content'] = array(
    'name' => 'edit own nefo_news content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_product_article content'.
  $permissions['edit own nefo_product_article content'] = array(
    'name' => 'edit own nefo_product_article content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_product_factsheet content'.
  $permissions['edit own nefo_product_factsheet content'] = array(
    'name' => 'edit own nefo_product_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_product_interview content'.
  $permissions['edit own nefo_product_interview content'] = array(
    'name' => 'edit own nefo_product_interview content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_product_literature_tip content'.
  $permissions['edit own nefo_product_literature_tip content'] = array(
    'name' => 'edit own nefo_product_literature_tip content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_product_opinion content'.
  $permissions['edit own nefo_product_opinion content'] = array(
    'name' => 'edit own nefo_product_opinion content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_product_press_release content'.
  $permissions['edit own nefo_product_press_release content'] = array(
    'name' => 'edit own nefo_product_press_release content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_product_report content'.
  $permissions['edit own nefo_product_report content'] = array(
    'name' => 'edit own nefo_product_report content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_product_study content'.
  $permissions['edit own nefo_product_study content'] = array(
    'name' => 'edit own nefo_product_study content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_product_workshop content'.
  $permissions['edit own nefo_product_workshop content'] = array(
    'name' => 'edit own nefo_product_workshop content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_slide_factsheet content'.
  $permissions['edit own nefo_slide_factsheet content'] = array(
    'name' => 'edit own nefo_slide_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_slide_opinion content'.
  $permissions['edit own nefo_slide_opinion content'] = array(
    'name' => 'edit own nefo_slide_opinion content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_slide_report content'.
  $permissions['edit own nefo_slide_report content'] = array(
    'name' => 'edit own nefo_slide_report content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nefo_slideshow content'.
  $permissions['edit own nefo_slideshow content'] = array(
    'name' => 'edit own nefo_slideshow content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own researcher profile'.
  $permissions['edit own researcher profile'] = array(
    'name' => 'edit own researcher profile',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'researcher' => 'researcher',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in event_types'.
  $permissions['edit terms in event_types'] = array(
    'name' => 'edit terms in event_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in nefo_schlagworte'.
  $permissions['edit terms in nefo_schlagworte'] = array(
    'name' => 'edit terms in nefo_schlagworte',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in nefo_taxonomy_blogs'.
  $permissions['edit terms in nefo_taxonomy_blogs'] = array(
    'name' => 'edit terms in nefo_taxonomy_blogs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in nefo_taxonomy_interview'.
  $permissions['edit terms in nefo_taxonomy_interview'] = array(
    'name' => 'edit terms in nefo_taxonomy_interview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in nefo_taxonomy_news'.
  $permissions['edit terms in nefo_taxonomy_news'] = array(
    'name' => 'edit terms in nefo_taxonomy_news',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in nefo_taxonomy_tags'.
  $permissions['edit terms in nefo_taxonomy_tags'] = array(
    'name' => 'edit terms in nefo_taxonomy_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'geocoder_service_all_handlers'.
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_exif'.
  $permissions['geocoder_service_handler_exif'] = array(
    'name' => 'geocoder_service_handler_exif',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_google'.
  $permissions['geocoder_service_handler_google'] = array(
    'name' => 'geocoder_service_handler_google',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_gpx'.
  $permissions['geocoder_service_handler_gpx'] = array(
    'name' => 'geocoder_service_handler_gpx',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_json'.
  $permissions['geocoder_service_handler_json'] = array(
    'name' => 'geocoder_service_handler_json',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_kml'.
  $permissions['geocoder_service_handler_kml'] = array(
    'name' => 'geocoder_service_handler_kml',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_latlon'.
  $permissions['geocoder_service_handler_latlon'] = array(
    'name' => 'geocoder_service_handler_latlon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_mapquest_nominatim'.
  $permissions['geocoder_service_handler_mapquest_nominatim'] = array(
    'name' => 'geocoder_service_handler_mapquest_nominatim',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_wkt'.
  $permissions['geocoder_service_handler_wkt'] = array(
    'name' => 'geocoder_service_handler_wkt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yahoo'.
  $permissions['geocoder_service_handler_yahoo'] = array(
    'name' => 'geocoder_service_handler_yahoo',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yandex'.
  $permissions['geocoder_service_handler_yandex'] = array(
    'name' => 'geocoder_service_handler_yandex',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any researcher profile'.
  $permissions['view any researcher profile'] = array(
    'name' => 'view any researcher profile',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'researcher' => 'researcher',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'researcher' => 'researcher',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own researcher profile'.
  $permissions['view own researcher profile'] = array(
    'name' => 'view own researcher profile',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'researcher' => 'researcher',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Author' => 'Author',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
