<?php

/**
 * @file
 * Specify common apps components to be created by apps_compatible.
 */

/**
 * Implements hook_apps_compatible_info().
 */
function base_page_apps_compatible_info() {
  return array(
    // Ensure a set of roles is created.
    'role' => array(
      'administrator' => array(
        'machine name' => 'administrator',
      ),
      'editor' => array(
        'machine name' => 'editor',
      ),
      'contributor' => array(
        'machine name' => 'contributor',
      ),
    ),
  );
}

