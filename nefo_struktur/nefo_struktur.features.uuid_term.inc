<?php
/**
 * @file
 * nefo_struktur.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function nefo_struktur_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'COP',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0b4a7d1c-8d7a-4477-b2e9-43df3c8e225d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_schlagworte',
    'url_alias' => array(
      0 => array(
        'alias' => 'nefo-schlagworte/cop',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IPBES-2 Antalya 2013',
    'description' => '<p>2. Plenumstreffen von IPBES vom 9. bis 14. Dezember 2013 in Antalya, Türkei</p><p>IPBES-Blog-LogoIm türkischen Antalya traf sich vom 9.- 14. Dezember 2013 die Weltgemeinschaft zur zweiten Plenumssitzung der zwischenstaatlichen Wissenschafts-Politik-Plattform zu Biodiversität und Ökosystemleistungen.</p><p>Experten aus der deutschen Biodiversitätsforschung sowie das nefo logo text-Team waren vor Ort und berichteten von den aktuellen Entwicklungen.</p>',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '11f2f93b-43be-4537-a0c7-b15bab03f4cc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_blogs',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'blog/ipbes-2-antalya-2013',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Inwertsetzung',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '16dbdb0b-7c4d-41b7-9a89-91baa4780e9d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_tags',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'themen/inwertsetzung',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gesundheit',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '26a642f8-583f-469a-84a4-1c99b45e31e6',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_tags',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'themen/gesundheit',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IPBES-3 Bonn 2015',
    'description' => '<p>3. Vollversammlung von IPBES vom 12. bis 17. Januar 2015 in Bonn</p><p>IPBES-Blog-LogoDieses Jahr wieder in Deutschland kommen die Vertreter der inzwischen 126 Mitgliedstaaten zusammen, um über wesentliche Punkte wie die geplanten Inhalte der Berichte und Politikinstrumente abzustimmen. Experten aus dem nefo logo text-Team sind vor Ort und berichteten von den aktuellen Entwicklungen. Da das NeFo-Engagement in IPBES und das Interesse für unsere Arbeit über die Landesgrenzen hinaus geht, ist der Blog überwiegend in Englisch gehalten.</p><p>Verfolgen Sie die Konferenz auch auf Twitter unter dem Hashtag <a href="https://twitter.com/search?q=ipbes3&amp;src=typd">#ipbes3</a>!</p>',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2bd96000-151f-4b48-8215-8203dab32802',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_blogs',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'blog/ipbes-3-bonn-2015',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pan-europäisches Assessments',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2c6efaeb-fb3d-46a0-9c5f-3e69e04df0a5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_tags',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'themen/pan-europaeisches-assessment',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'CBD',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '333dc78b-a88a-4e80-ba4b-17fb9fa0afc7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_schlagworte',
    'url_alias' => array(
      0 => array(
        'alias' => 'nefo-schlagworte/cbd',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IPBES-1 Bonn 2013',
    'description' => '<p>IPBES-1 vom 21.-26.01.2013 in Bonn</p><p>IPBES BlogIn Bonn traf sich die Weltgemeinschaft zur ersten Plenarsitzung der "Intergovernmental Platform on Biodiversity &amp; Ecosystem Services" (IPBES).</p><p>Experten aus der deutschen Biodiversitätsforschung sowie das nefo logo text-Team waren vor Ort und berichteten täglich von den aktuellen Entwicklungen.</p>',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3a1d4f3e-8101-44f1-83e8-a012ac65d673',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_blogs',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'blog/ipbes-1-bonn-2013',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => '1 IPBES Nairobi 2011 für 1. IPBES Gründungstreffen 2011',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3a34f751-66cd-4431-a07f-94d3d95889ed',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_blogs',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'blog/1-ipbes-nairobi-2011',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bestäubung',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '521329ca-da45-4f18-9fdb-3269d68f80f9',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_tags',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'themen/bestaeubung',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'asdf',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7067b803-6a8a-40ab-bfc6-e49884be5520',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_schlagworte',
    'url_alias' => array(
      0 => array(
        'alias' => 'nefo-schlagworte/asdf',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IPBES II Nairobi 2009',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '717f9f76-90e1-4fc2-b7a9-99fb9c9acc19',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_blogs',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'blog/ipbes-II-nairobi-2009',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IPBES I Putrajaya 2008',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '71fa9532-6073-4477-b9bf-481cdfd949d0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_blogs',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'blog/ipbes-I-putrajaya-2008',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Biodiversitätsforschende im Video-Interview',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '8305d56c-c52c-44dd-8c4f-54bc8f3a8437',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_interview',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'schnittstellen/produkte/interviews/videos',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Monitoring',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '83cf9aba-a2b6-4fb1-8790-34784ce8f45c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_tags',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'themen/monitoring',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IPBES Nachrichten',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '88ff81af-dc78-4b57-9cee-a7f028fbf244',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_news',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'schnittstellen/ipbes/news',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IPBES-4 Kuala Lumpur 2016',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a72d3b1d-46d7-43c9-bc3c-47fbd1f43908',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_blogs',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'blog/ipbes-4-kuala-lumpur-2016',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Klimawandel',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bebb7153-48cb-4272-a298-05ca45b682dd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_tags',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'themen/klimawandel',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Experteninterviews',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bee2ea4d-9779-4c49-b1d2-11f2a4dc5b39',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_interview',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'schnittstellen/produkte/interviews/experten',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bioökonomie',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c2e301e3-0b2a-46f2-84fc-687e3c4c3358',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_tags',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'themen/biooekonomie',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => '2 IPBES Panama City 2012 für 2. IPBES Gründungstreffen 2012',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ca27288f-2152-4e4a-b253-4d1f0132b342',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_blogs',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'blog/2-ipbes-panama-city-2012',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Invasive Arten',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ce1d8b37-8145-4c62-bd5a-c381de58f4dd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_tags',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'themen/invasive-arten',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bio-Div Nachrichten',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd5ca94f7-70af-4cc6-ba9e-dadf08cb2d3f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_news',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'news/bio-div',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Politikwissenschaften',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd950a611-8ea3-48af-b9a9-c5e2e3d3583b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_tags',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'themen/politikwissenschaften',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Land-Degradation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ddcbbec8-4caf-4c2a-a46f-0980f4b90335',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_tags',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'themen/land-degradation',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'IPBES III Busan 2010',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f7c0de7c-2252-4d18-960e-158822e643a4',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_blogs',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'blog/ipbes-III-busan-2010',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Access & Benefit Sharing',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fa1dd97a-a64b-4034-9eba-ad3f535e1512',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'nefo_taxonomy_tags',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'themen/access-benefit-sharing',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
