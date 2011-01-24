<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function thacker_distro_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = 'Thacker.com.br home page';
  $context->tag = 'section';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-dt_event_home-block_1' => array(
          'module' => 'views',
          'delta' => 'dt_event_home-block_1',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-dt_project_home_promo-block_1' => array(
          'module' => 'views',
          'delta' => 'dt_project_home_promo-block_1',
          'region' => 'preface_top',
          'weight' => 0,
        ),
        'search-0' => array(
          'module' => 'search',
          'delta' => 0,
          'region' => 'preface_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thacker.com.br home page');
  t('section');

  $export['home'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'logged_in';
  $context->description = '';
  $context->tag = 'general';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('general');

  $export['logged_in'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'logged_out';
  $context->description = '';
  $context->tag = 'general';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-0' => array(
          'module' => 'user',
          'delta' => 0,
          'region' => 'header_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('general');

  $export['logged_out'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = 'general';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'thacker_distro-0' => array(
          'module' => 'thacker_distro',
          'delta' => 0,
          'region' => 'postscript_bottom',
          'weight' => 0,
        ),
        'thacker_distro-1' => array(
          'module' => 'thacker_distro',
          'delta' => 1,
          'region' => 'postscript_bottom',
          'weight' => 1,
        ),
        'thacker_distro-2' => array(
          'module' => 'thacker_distro',
          'delta' => 2,
          'region' => 'footer',
          'weight' => 0,
        ),
        'system-0' => array(
          'module' => 'system',
          'delta' => 0,
          'region' => 'footer',
          'weight' => 1,
        ),
        'thacker_distro-3' => array(
          'module' => 'thacker_distro',
          'delta' => 3,
          'region' => 'footer',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('general');

  $export['sitewide'] = $context;
  return $export;
}
