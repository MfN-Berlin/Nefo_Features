<?php
/**
 * @file
 * researcher_profile.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function researcher_profile_user_default_roles() {
  $roles = array();

  // Exported role: researcher.
  $roles['researcher'] = array(
    'name' => 'researcher',
    'weight' => 3,
  );

  return $roles;
}
