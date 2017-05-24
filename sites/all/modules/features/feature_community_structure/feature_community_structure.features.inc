<?php
/**
 * @file
 * feature_community_structure.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_community_structure_node_info() {
  $items = array(
    'community' => array(
      'name' => t('Community'),
      'base' => 'node_content',
      'description' => t('community as group'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'community_posts' => array(
      'name' => t('Community Posts'),
      'base' => 'node_content',
      'description' => t('All posts related to community'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'community_users' => array(
      'name' => t('Community Users'),
      'base' => 'node_content',
      'description' => t('Users added in a community'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
