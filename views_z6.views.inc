<?php
/**
 * @file
 * Provide views data and handlers for views_b4 module.
 */

/**
 * Implements hook_views_plugins().
 */
function views_z6_views_plugins() {
  return array(
    'style' => array(
      'flexviews' => array(
        'title' => t('views_z6'),
        'handler' => 'views_plugin_style_views_z6',
        'help' => t("Display content in views_z6"),
        'theme' => 'views_view_views_z6',
        'type' => 'normal',
        'path' => backdrop_get_path('module', 'views_z6'),
        'theme path' => backdrop_get_path('module', 'views_z6'),
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses grouping' => FALSE,
        'uses options' => TRUE,
      ),
    ),
  );
}

