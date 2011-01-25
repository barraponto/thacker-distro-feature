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
  );

  $export['skinr_thacker'] = $strongarm;
  return $export;
}
