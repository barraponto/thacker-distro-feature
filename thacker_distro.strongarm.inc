<?php

/**
 * Implementation of hook_strongarm().
 */
function thacker_distro_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'heartbeat/activity/pictures';

  $export['site_frontpage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Transparência Hacker';

  $export['site_name'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'skinr_thacker';
  $strongarm->value = array(
    'block' => array(
      'system-0' => array(
        'grid16-width' => 'grid16-2',
      ),
      'thacker_distro-0' => array(
        'grid16-width' => 'grid16-12',
      ),
      'thacker_distro-1' => array(
        'grid16-width' => 'grid16-3',
      ),
      'thacker_distro-2' => array(
        'grid16-width' => 'grid16-7',
      ),
      'thacker_distro-3' => array(
        'grid16-width' => 'grid16-7',
      ),
      'thacker_distro-4' => array(
        'grid16-width' => 'grid16-7',
      ),
      'search-0' => array(
        'grid16-width' => 'grid16-6',
        'fusion-alignment' => 'fusion-right',
      ),
      'user-0' => array(
        'grid16-width' => 'grid16-7',
        '_additional' => 'bemvindo',
      ),
    ),
    'views' => array(
      'view-dt_project_home_promo-display-default' => array(
        'grid-width' => array(),
        'fusion-content-alignment' => '',
        'fusion-multicol' => '',
        'fusion-list-styles' => array(),
        'fusion-float-imagefield' => '',
      ),
      'view-heartbeat_pictures-display-default' => array(
        'grid-width' => array(),
        'fusion-content-alignment' => '',
        'fusion-multicol' => '',
        'fusion-list-styles' => array(),
        'fusion-float-imagefield' => '',
      ),
      'view-dt_event_home-display-default' => array(
        'grid-width' => array(),
        'fusion-content-alignment' => '',
        'fusion-multicol' => '',
        'fusion-list-styles' => array(),
        'fusion-float-imagefield' => '',
      ),
      'view-dt_project_page-display-default' => array(
        'grid-width' => array(),
        'fusion-content-alignment' => '',
        'fusion-multicol' => '',
        'fusion-list-styles' => array(),
        'fusion-float-imagefield' => '',
      ),
    ),
    'comment' => array(
      'dt_project' => array(),
      'dt_event' => array(),
    ),
    'node' => array(
      'dt_project' => array(),
      'dt_event' => array(),
    ),
  );

  $export['skinr_thacker'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_thacker_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'theme_grid' => 'grid16-960',
    'fluid_grid_width' => 'fluid-100',
    'sidebar_layout' => 'sidebars-split',
    'sidebar_first_width' => '3',
    'sidebar_last_width' => '4',
    'theme_font' => 'none',
    'theme_font_size' => 'font-size-12',
    'primary_menu_dropdown' => 1,
    'breadcrumb_display' => 0,
    'search_snippet' => 1,
    'search_info_type' => 1,
    'search_info_user' => 1,
    'search_info_date' => 1,
    'search_info_comment' => 1,
    'search_info_upload' => 1,
    'user_notverified_display' => 1,
    'block_config_link' => 1,
    'grid_mask' => 0,
    'rebuild_registry' => 0,
    'fix_css_limit' => 0,
  );

  $export['theme_thacker_settings'] = $strongarm;
  return $export;
}
