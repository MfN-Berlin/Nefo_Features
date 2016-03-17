<?php
/**
 * @file
 * researcher_profile.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function researcher_profile_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Link zum Kontaktformular für Forscher';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'researcher_contact';
  $fe_block_boxes->body = '<p>Kontaktieren sie andere Gruppenmitglieder</p><div class="button button-blue"><a href="forscherprofile/kontakt">Registrieren</a></div>';

  $export['researcher_contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Forscherprofil anlegen';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'researcher_signup';
  $fe_block_boxes->body = '<p>Eigenes Forscherprofil anlegen</p><div class="button button-blue"><a href="forscherprofile/signup">Profil anlegen</a></div>';

  $export['researcher_signup'] = $fe_block_boxes;

  return $export;
}
