<?php
/**
 * @file
 * nefo_berechtigungen.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function nefo_berechtigungen_user_default_roles() {
  $roles = array();

  // Exported role: Author.
  $roles['Author'] = array(
    'name' => 'Author',
    'weight' => 3,
  );

  // Exported role: Site Administrator.
  $roles['Site Administrator'] = array(
    'name' => 'Site Administrator',
    'weight' => 4,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 5,
  );

  return $roles;
}
