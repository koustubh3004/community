<?php
/**
 * @file
 * feature_community_structure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_community_structure_user_default_permissions() {
  $permissions = array();

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

  // Exported permission: 'create community content'.
  $permissions['create community content'] = array(
    'name' => 'create community content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create community_posts content'.
  $permissions['create community_posts content'] = array(
    'name' => 'create community_posts content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create community_users content'.
  $permissions['create community_users content'] = array(
    'name' => 'create community_users content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any community content'.
  $permissions['delete any community content'] = array(
    'name' => 'delete any community content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any community_posts content'.
  $permissions['delete any community_posts content'] = array(
    'name' => 'delete any community_posts content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any community_users content'.
  $permissions['delete any community_users content'] = array(
    'name' => 'delete any community_users content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own community content'.
  $permissions['delete own community content'] = array(
    'name' => 'delete own community content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own community_posts content'.
  $permissions['delete own community_posts content'] = array(
    'name' => 'delete own community_posts content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own community_users content'.
  $permissions['delete own community_users content'] = array(
    'name' => 'delete own community_users content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any community content'.
  $permissions['edit any community content'] = array(
    'name' => 'edit any community content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any community_posts content'.
  $permissions['edit any community_posts content'] = array(
    'name' => 'edit any community_posts content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any community_users content'.
  $permissions['edit any community_users content'] = array(
    'name' => 'edit any community_users content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own community content'.
  $permissions['edit own community content'] = array(
    'name' => 'edit own community content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own community_posts content'.
  $permissions['edit own community_posts content'] = array(
    'name' => 'edit own community_posts content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own community_users content'.
  $permissions['edit own community_users content'] = array(
    'name' => 'edit own community_users content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
