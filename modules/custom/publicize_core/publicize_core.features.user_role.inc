<?php
/**
 * @file
 * publicize_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function publicize_core_user_default_roles() {
  $roles = array();

  // Exported role: Site Editor.
  $roles['Site Editor'] = array(
    'name' => 'Site Editor',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  return $roles;
}
