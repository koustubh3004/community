<?php
/**
 * @file
 * feature_community_structure.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function feature_community_structure_workbench_moderation_export_transitions() {
  $items = array(
    'needs_review:published' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'name' => 'Publish',
    ),
  );
  return $items;
}
