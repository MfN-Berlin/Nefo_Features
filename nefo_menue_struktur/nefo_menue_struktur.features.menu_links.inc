<?php
/**
 * @file
 * nefo_menue_struktur.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nefo_menue_struktur_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_access--benefit-sharing:taxonomy/term/38.
  $menu_links['main-menu_access--benefit-sharing:taxonomy/term/38'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/38',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Access & Benefit Sharing',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Access & Benefit Sharing',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_access--benefit-sharing:taxonomy/term/38',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_unsere-themen:node/44',
  );
  // Exported menu link: main-menu_agrarpolitik:node/21.
  $menu_links['main-menu_agrarpolitik:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Agrarpolitik',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Agrarpolitik',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_agrarpolitik:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_europisch:node/49',
  );
  // Exported menu link: main-menu_aktuelle-aufrufe-zur-beteiligung-im-ipbes--prozess:node/75.
  $menu_links['main-menu_aktuelle-aufrufe-zur-beteiligung-im-ipbes--prozess:node/75'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/75',
    'router_path' => 'node/%',
    'link_title' => 'Aktuelle Aufrufe zur Beteiligung im IPBES -Prozess',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Aktuelle Aufrufe zur Beteiligung im IPBES -Prozess',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_aktuelle-aufrufe-zur-beteiligung-im-ipbes--prozess:node/75',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_bei-ipbes-aktiv-werden:node/71',
  );
  // Exported menu link: main-menu_aktuelle-aufrufe:node/888.
  $menu_links['main-menu_aktuelle-aufrufe:node/888'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/888',
    'router_path' => 'node/%',
    'link_title' => 'Aktuelle Aufrufe',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'main-menu_aktuelle-aufrufe:node/888',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_eklipse---mechanismus:node/890',
  );
  // Exported menu link: main-menu_ausschreibungen:node/6.
  $menu_links['main-menu_ausschreibungen:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Ausschreibungen',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Ausschreibungen',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_ausschreibungen:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forschung:node/25',
  );
  // Exported menu link: main-menu_bei-ipbes-aktiv-werden:node/71.
  $menu_links['main-menu_bei-ipbes-aktiv-werden:node/71'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/71',
    'router_path' => 'node/%',
    'link_title' => 'Bei IPBES aktiv werden',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Bei IPBES aktiv werden',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_bei-ipbes-aktiv-werden:node/71',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes:node/32',
  );
  // Exported menu link: main-menu_ber-ipbes:node/38.
  $menu_links['main-menu_ber-ipbes:node/38'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => 'Über IPBES',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Über IPBES - Informationen zur Struktur und zum Conceptual Framework',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_ber-ipbes:node/38',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes:node/32',
  );
  // Exported menu link: main-menu_berichte:schnittstellen/produkte/berichte.
  $menu_links['main-menu_berichte:schnittstellen/produkte/berichte'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'schnittstellen/produkte/berichte',
    'router_path' => 'schnittstellen/produkte/berichte',
    'link_title' => 'Berichte',
    'options' => array(
      'attributes' => array(
        'title' => 'Berichte',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_berichte:schnittstellen/produkte/berichte',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo-produkte:node/13',
  );
  // Exported menu link: main-menu_bestubung:taxonomy/term/32.
  $menu_links['main-menu_bestubung:taxonomy/term/32'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/32',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bestäubung',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Bestäubung',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_bestubung:taxonomy/term/32',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_unsere-themen:node/44',
  );
  // Exported menu link: main-menu_biodiversittsmonitoring:node/60.
  $menu_links['main-menu_biodiversittsmonitoring:node/60'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/60',
    'router_path' => 'node/%',
    'link_title' => 'Biodiversitätsmonitoring',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Biodiversitätsmonitoring',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_biodiversittsmonitoring:node/60',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_national:node/12',
  );
  // Exported menu link: main-menu_biokonomie:taxonomy/term/35.
  $menu_links['main-menu_biokonomie:taxonomy/term/35'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/35',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bioökonomie',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Bioökonomie',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_biokonomie:taxonomy/term/35',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_unsere-themen:node/44',
  );
  // Exported menu link: main-menu_bspin-nachwuchswissenschaftler:node/67.
  $menu_links['main-menu_bspin-nachwuchswissenschaftler:node/67'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/67',
    'router_path' => 'node/%',
    'link_title' => 'BSPIN/ Nachwuchswissenschaftler',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'BSPIN/ Nachwuchswissenschaftler',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_bspin-nachwuchswissenschaftler:node/67',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes:node/32',
  );
  // Exported menu link: main-menu_cbd:node/50.
  $menu_links['main-menu_cbd:node/50'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'CBD',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Convention on Biological Diversity',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_cbd:node/50',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_international:node/11',
  );
  // Exported menu link: main-menu_citizen-science:node/76.
  $menu_links['main-menu_citizen-science:node/76'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/76',
    'router_path' => 'node/%',
    'link_title' => 'Citizen Science',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Citizen Science',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_citizen-science:node/76',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_einbringen-in-die-forschung:node/1',
  );
  // Exported menu link: main-menu_community-bezug:node/81.
  $menu_links['main-menu_community-bezug:node/81'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/81',
    'router_path' => 'node/%',
    'link_title' => 'Community-Bezug',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Community-Bezug',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_community-bezug:node/81',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo:node/33',
  );
  // Exported menu link: main-menu_cop:node/61.
  $menu_links['main-menu_cop:node/61'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'COP',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'CBD-Vertragsstaatenkonferenzen (COPs)',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_cop:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_cbd:node/50',
  );
  // Exported menu link: main-menu_daten-beitragen:node/10.
  $menu_links['main-menu_daten-beitragen:node/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Daten beitragen',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Daten beitragen',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_daten-beitragen:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_einbringen-in-die-forschung:node/1',
  );
  // Exported menu link: main-menu_daten-und-infrastrukturen:node/28.
  $menu_links['main-menu_daten-und-infrastrukturen:node/28'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Daten und Infrastrukturen',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Daten und Infrastrukturen',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_daten-und-infrastrukturen:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forschung:node/25',
  );
  // Exported menu link: main-menu_deutsche-ipbes-aktive:node/893.
  $menu_links['main-menu_deutsche-ipbes-aktive:node/893'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/893',
    'router_path' => 'node/%',
    'link_title' => 'Deutsche IPBES-Aktive',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Deutsche IPBES-Experten geben Auskunft',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_deutsche-ipbes-aktive:node/893',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes:node/32',
  );
  // Exported menu link: main-menu_deutsche-untersttzungsstruktur:node/4.
  $menu_links['main-menu_deutsche-untersttzungsstruktur:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Deutsche Unterstützungsstruktur',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Deutsche Unterstützungsstruktur',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_deutsche-untersttzungsstruktur:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes:node/32',
  );
  // Exported menu link: main-menu_einbringen-in-die-forschung:node/1.
  $menu_links['main-menu_einbringen-in-die-forschung:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Einbringen in die Forschung',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Einbringen in die Forschung',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_einbringen-in-die-forschung:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forschung:node/25',
  );
  // Exported menu link: main-menu_eklipse---mechanismus:node/890.
  $menu_links['main-menu_eklipse---mechanismus:node/890'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/890',
    'router_path' => 'node/%',
    'link_title' => 'EKLIPSE - Mechanismus',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_eklipse---mechanismus:node/890',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_eu-mechanismus:node/887',
  );
  // Exported menu link: main-menu_eu-mechanismus:node/887.
  $menu_links['main-menu_eu-mechanismus:node/887'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/887',
    'router_path' => 'node/%',
    'link_title' => 'EU-Mechanismus',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_eu-mechanismus:node/887',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes--co:node/20',
  );
  // Exported menu link: main-menu_eu-netzwerk-von-netzwerken-als-basis:node/891.
  $menu_links['main-menu_eu-netzwerk-von-netzwerken-als-basis:node/891'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/891',
    'router_path' => 'node/%',
    'link_title' => 'EU-Netzwerk von Netzwerken als Basis',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_eu-netzwerk-von-netzwerken-als-basis:node/891',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_eu-mechanismus:node/887',
  );
  // Exported menu link: main-menu_europisch:node/49.
  $menu_links['main-menu_europisch:node/49'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/49',
    'router_path' => 'node/%',
    'link_title' => 'Europäisch',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Informationen zu Naturschutzgesetzen und Agrarpolitik der EU',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_europisch:node/49',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_politik:node/14',
  );
  // Exported menu link: main-menu_faktenbltter:schnittstellen/produkte/faktenblaetter.
  $menu_links['main-menu_faktenbltter:schnittstellen/produkte/faktenblaetter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'schnittstellen/produkte/faktenblaetter',
    'router_path' => 'schnittstellen/produkte/faktenblaetter',
    'link_title' => 'Faktenblätter',
    'options' => array(
      'attributes' => array(
        'title' => 'Faktenblätter',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_faktenbltter:schnittstellen/produkte/faktenblaetter',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo-produkte:node/13',
  );
  // Exported menu link: main-menu_forschung:node/25.
  $menu_links['main-menu_forschung:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Forschung',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Überblick über das Forschungsfeld',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_forschung:node/25',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_forschungsakteure:node/15.
  $menu_links['main-menu_forschungsakteure:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Forschungsakteure',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Forschungsakteure',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_forschungsakteure:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forschung:node/25',
  );
  // Exported menu link: main-menu_forschungsatlas:forschung/forschungsakteure/forschungsatlas.
  $menu_links['main-menu_forschungsatlas:forschung/forschungsakteure/forschungsatlas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forschung/forschungsakteure/forschungsatlas',
    'router_path' => 'forschung/forschungsakteure/forschungsatlas',
    'link_title' => 'Forschungsatlas',
    'options' => array(
      'attributes' => array(
        'title' => 'Forschungsatlas',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_forschungsatlas:forschung/forschungsakteure/forschungsatlas',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forschungsakteure:node/15',
  );
  // Exported menu link: main-menu_forschungsbedarf:node/29.
  $menu_links['main-menu_forschungsbedarf:node/29'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Forschungsbedarf',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Forschungsbedarf mit Anwendungsperspektive',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_forschungsbedarf:node/29',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_einbringen-in-die-forschung:node/1',
  );
  // Exported menu link: main-menu_forschungsbedarf:node/63.
  $menu_links['main-menu_forschungsbedarf:node/63'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/63',
    'router_path' => 'node/%',
    'link_title' => 'Forschungsbedarf',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Forschungsbedarf',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_forschungsbedarf:node/63',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_cbd:node/50',
  );
  // Exported menu link: main-menu_forschungsblogs:node/24.
  $menu_links['main-menu_forschungsblogs:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Forschungsblogs',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Forschungsblogs',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_forschungsblogs:node/24',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_netzwerke-und-vernetzung:node/37',
  );
  // Exported menu link: main-menu_future-earth:node/78.
  $menu_links['main-menu_future-earth:node/78'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/78',
    'router_path' => 'node/%',
    'link_title' => 'Future Earth',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Future Earth',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_future-earth:node/78',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_internationales:node/8',
  );
  // Exported menu link: main-menu_geobon:node/79.
  $menu_links['main-menu_geobon:node/79'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/79',
    'router_path' => 'node/%',
    'link_title' => 'GeoBon',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'GeoBon',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_geobon:node/79',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_internationales:node/8',
  );
  // Exported menu link: main-menu_gesundheit:taxonomy/term/54.
  $menu_links['main-menu_gesundheit:taxonomy/term/54'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/54',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Gesundheit',
    'options' => array(
      'attributes' => array(
        'title' => 'Gesundheit',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_gesundheit:taxonomy/term/54',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_unsere-themen:node/44',
  );
  // Exported menu link: main-menu_gti-kontaktstelle:node/45.
  $menu_links['main-menu_gti-kontaktstelle:node/45'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'gti-Kontaktstelle',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'gti-Kontaktstelle',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_gti-kontaktstelle:node/45',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_daten-und-infrastrukturen:node/28',
  );
  // Exported menu link: main-menu_hintergrund-eu-politikberatung-zur-biodiversitt:node/889.
  $menu_links['main-menu_hintergrund-eu-politikberatung-zur-biodiversitt:node/889'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/889',
    'router_path' => 'node/%',
    'link_title' => 'Hintergrund: EU-Politikberatung zur Biodiversität',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_hintergrund-eu-politikberatung-zur-biodiversitt:node/889',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_eu-mechanismus:node/887',
  );
  // Exported menu link: main-menu_institutionen:node/43.
  $menu_links['main-menu_institutionen:node/43'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/43',
    'router_path' => 'node/%',
    'link_title' => 'Institutionen',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Institutionen',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_institutionen:node/43',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forschungsakteure:node/15',
  );
  // Exported menu link: main-menu_international:node/11.
  $menu_links['main-menu_international:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'International',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Einführung in internationale Naturschutz-Initiativen mit Verweisen zu CBD, IPBES, Millenium Ecosystem Assessment und zur TEEB-Studie.',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_international:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 29,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_politik:node/14',
  );
  // Exported menu link: main-menu_internationales:node/8.
  $menu_links['main-menu_internationales:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Internationales',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Internationales',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_internationales:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forschung:node/25',
  );
  // Exported menu link: main-menu_interviews:schnittstellen/produkte/interviews.
  $menu_links['main-menu_interviews:schnittstellen/produkte/interviews'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'schnittstellen/produkte/interviews',
    'router_path' => 'schnittstellen/produkte/interviews',
    'link_title' => 'Interviews',
    'options' => array(
      'attributes' => array(
        'title' => 'Interviews',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_interviews:schnittstellen/produkte/interviews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo-produkte:node/13',
  );
  // Exported menu link: main-menu_invasive-arten:taxonomy/term/37.
  $menu_links['main-menu_invasive-arten:taxonomy/term/37'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/37',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Invasive Arten',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Invasive Arten',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_invasive-arten:taxonomy/term/37',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_unsere-themen:node/44',
  );
  // Exported menu link: main-menu_ipbes--co:node/20.
  $menu_links['main-menu_ipbes--co:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'IPBES & Co.',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Biodiversitätswissen für Politik relevant machen',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_ipbes--co:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_ipbes-arbeitsprogramm:node/213.
  $menu_links['main-menu_ipbes-arbeitsprogramm:node/213'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/213',
    'router_path' => 'node/%',
    'link_title' => 'IPBES Arbeitsprogramm',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_ipbes-arbeitsprogramm:node/213',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ber-ipbes:node/38',
  );
  // Exported menu link: main-menu_ipbes-assessments:node/1312.
  $menu_links['main-menu_ipbes-assessments:node/1312'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1312',
    'router_path' => 'node/%',
    'link_title' => 'IPBES Assessments',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_ipbes-assessments:node/1312',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes:node/32',
  );
  // Exported menu link: main-menu_ipbes-faq:node/286.
  $menu_links['main-menu_ipbes-faq:node/286'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/286',
    'router_path' => 'node/%',
    'link_title' => 'IPBES FAQ',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'NeFo FAQ zu IPBES',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_ipbes-faq:node/286',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ber-ipbes:node/38',
  );
  // Exported menu link: main-menu_ipbes-historie:node/218.
  $menu_links['main-menu_ipbes-historie:node/218'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/218',
    'router_path' => 'node/%',
    'link_title' => 'IPBES Historie',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Übersicht über den IPBES Entstehungsprozess sowie über alle Plenen.',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_ipbes-historie:node/218',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ber-ipbes:node/38',
  );
  // Exported menu link: main-menu_ipbes-news:taxonomy/term/41.
  $menu_links['main-menu_ipbes-news:taxonomy/term/41'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/41',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'IPBES News',
    'options' => array(
      'attributes' => array(
        'title' => 'IPBES News',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_ipbes-news:taxonomy/term/41',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes:node/32',
  );
  // Exported menu link: main-menu_ipbes-nominierungsprozess:node/18.
  $menu_links['main-menu_ipbes-nominierungsprozess:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'IPBES Nominierungsprozess',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'IPBES Nominierungsprozess',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_ipbes-nominierungsprozess:node/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_bei-ipbes-aktiv-werden:node/71',
  );
  // Exported menu link: main-menu_ipbes:node/32.
  $menu_links['main-menu_ipbes:node/32'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'IPBES',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'IPBES',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_ipbes:node/32',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes--co:node/20',
  );
  // Exported menu link: main-menu_klimawandel:taxonomy/term/39.
  $menu_links['main-menu_klimawandel:taxonomy/term/39'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/39',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Klimawandel',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Klimawandel',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_klimawandel:taxonomy/term/39',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_unsere-themen:node/44',
  );
  // Exported menu link: main-menu_kommentierte-verweisliste:node/47.
  $menu_links['main-menu_kommentierte-verweisliste:node/47'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/47',
    'router_path' => 'node/%',
    'link_title' => 'Kommentierte Verweisliste',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Kommentierte Verweisliste',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_kommentierte-verweisliste:node/47',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_daten-und-infrastrukturen:node/28',
  );
  // Exported menu link: main-menu_kosystemleistungen:taxonomy/term/33.
  $menu_links['main-menu_kosystemleistungen:taxonomy/term/33'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/33',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Ökosystemleistungen',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Ökosystemleistungen',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_kosystemleistungen:taxonomy/term/33',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_unsere-themen:node/44',
  );
  // Exported menu link: main-menu_landnutzung:taxonomy/term/31.
  $menu_links['main-menu_landnutzung:taxonomy/term/31'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/31',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Landnutzung',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Landnutzung',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_landnutzung:taxonomy/term/31',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_unsere-themen:node/44',
  );
  // Exported menu link: main-menu_literatur-ber-ipbes:node/70.
  $menu_links['main-menu_literatur-ber-ipbes:node/70'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/70',
    'router_path' => 'node/%',
    'link_title' => 'Literatur über IPBES',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Literatur über IPBES',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_literatur-ber-ipbes:node/70',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_weitere-informationen-zu-ipbes:node/68',
  );
  // Exported menu link: main-menu_literaturtipps:schnittstellen/produkte/literaturtipps.
  $menu_links['main-menu_literaturtipps:schnittstellen/produkte/literaturtipps'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'schnittstellen/produkte/literaturtipps',
    'router_path' => 'schnittstellen/produkte/literaturtipps',
    'link_title' => 'Literaturtipps',
    'options' => array(
      'attributes' => array(
        'title' => 'Literaturtipps',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_literaturtipps:schnittstellen/produkte/literaturtipps',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo-produkte:node/13',
  );
  // Exported menu link: main-menu_monitoring:taxonomy/term/36.
  $menu_links['main-menu_monitoring:taxonomy/term/36'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/36',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Monitoring',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Monitoring',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_monitoring:taxonomy/term/36',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_unsere-themen:node/44',
  );
  // Exported menu link: main-menu_nachwuchswissenschaftler:node/67.
  $menu_links['main-menu_nachwuchswissenschaftler:node/67'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/67',
    'router_path' => 'node/%',
    'link_title' => 'Nachwuchswissenschaftler',
    'options' => array(
      'attributes' => array(
        'title' => 'Biodiversity Science-Policy Interfaces Network (BSPIN)',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_nachwuchswissenschaftler:node/67',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_einbringen-in-die-forschung:node/1',
  );
  // Exported menu link: main-menu_national:node/12.
  $menu_links['main-menu_national:node/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'National',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Einführung nationale Umweltpolitik mit Verweisen zu nationaler Biodiversitätsstrategie und weiteren Strategien.',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_national:node/12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -17,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_politik:node/14',
  );
  // Exported menu link: main-menu_nationale-biodiversittsstrategie:node/31.
  $menu_links['main-menu_nationale-biodiversittsstrategie:node/31'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Nationale Biodiversitätsstrategie',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Nationale Biodiversitätsstrategie',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_nationale-biodiversittsstrategie:node/31',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_national:node/12',
  );
  // Exported menu link: main-menu_naturschutzgesetze-eu:node/30.
  $menu_links['main-menu_naturschutzgesetze-eu:node/30'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Naturschutzgesetze EU',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Natura 2000',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_naturschutzgesetze-eu:node/30',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_europisch:node/49',
  );
  // Exported menu link: main-menu_nefo-blogs:node/425.
  $menu_links['main-menu_nefo-blogs:node/425'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/425',
    'router_path' => 'node/%',
    'link_title' => 'NeFo Blogs',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_nefo-blogs:node/425',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo-produkte:node/13',
  );
  // Exported menu link: main-menu_nefo-produkte:node/13.
  $menu_links['main-menu_nefo-produkte:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'NeFo-Produkte',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'NeFo-Produkte',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_nefo-produkte:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo:node/33',
  );
  // Exported menu link: main-menu_nefo-sachstandsberichte:node/656.
  $menu_links['main-menu_nefo-sachstandsberichte:node/656'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/656',
    'router_path' => 'node/%',
    'link_title' => 'NeFo-Sachstandsberichte',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Berichte über den Sachstand zu IPBES nach den jeweiligen IPBES-Plenen',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_nefo-sachstandsberichte:node/656',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes:node/32',
  );
  // Exported menu link: main-menu_nefo:node/33.
  $menu_links['main-menu_nefo:node/33'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'NeFo',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'NeFo',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_nefo:node/33',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_netzwerke-und-vernetzung:node/37.
  $menu_links['main-menu_netzwerke-und-vernetzung:node/37'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/37',
    'router_path' => 'node/%',
    'link_title' => 'Netzwerke und Vernetzung',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Netzwerke und Vernetzung',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_netzwerke-und-vernetzung:node/37',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forschung:node/25',
  );
  // Exported menu link: main-menu_newsletter-archiv:node/945.
  $menu_links['main-menu_newsletter-archiv:node/945'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/945',
    'router_path' => 'node/%',
    'link_title' => 'Newsletter-Archiv',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_newsletter-archiv:node/945',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo-produkte:node/13',
  );
  // Exported menu link: main-menu_pan-european-stakeholder-consultation:node/579.
  $menu_links['main-menu_pan-european-stakeholder-consultation:node/579'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/579',
    'router_path' => 'node/%',
    'link_title' => 'Pan European Stakeholder Consultation',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Pan European IPBES Stakeholder Consultation (PESC)',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_pan-european-stakeholder-consultation:node/579',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes:node/32',
  );
  // Exported menu link: main-menu_personen:forschung/forschungsakteure/personen.
  $menu_links['main-menu_personen:forschung/forschungsakteure/personen'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forschung/forschungsakteure/personen',
    'router_path' => 'forschung/forschungsakteure/personen',
    'link_title' => 'Personen',
    'options' => array(
      'attributes' => array(
        'title' => 'Forscherprofile',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_personen:forschung/forschungsakteure/personen',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forschungsakteure:node/15',
  );
  // Exported menu link: main-menu_politik:node/14.
  $menu_links['main-menu_politik:node/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Politik',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Politikprozesse zur Biodiversität',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_politik:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_projekte:node/27.
  $menu_links['main-menu_projekte:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Projekte',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Projekte',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_projekte:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_forschung:node/25',
  );
  // Exported menu link: main-menu_publikationen-mit-nefo-beteiligung:node/734.
  $menu_links['main-menu_publikationen-mit-nefo-beteiligung:node/734'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/734',
    'router_path' => 'node/%',
    'link_title' => 'Publikationen mit NeFo-Beteiligung',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_publikationen-mit-nefo-beteiligung:node/734',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo-produkte:node/13',
  );
  // Exported menu link: main-menu_rollen-von-expertinnen-und-experten:node/64.
  $menu_links['main-menu_rollen-von-expertinnen-und-experten:node/64'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Rollen von Expertinnen und Experten',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Rollen von Expertinnen und Experten',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_rollen-von-expertinnen-und-experten:node/64',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_schnittstellen-verstehen:node/7',
  );
  // Exported menu link: main-menu_sbstta:node/62.
  $menu_links['main-menu_sbstta:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'SBSTTA',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Wissenschaftlicher Beirat der CBD - SBSTTA',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_sbstta:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_cbd:node/50',
  );
  // Exported menu link: main-menu_schnittstellen-verstehen:node/7.
  $menu_links['main-menu_schnittstellen-verstehen:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Schnittstellen verstehen',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Schnittstellen verstehen',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_schnittstellen-verstehen:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes--co:node/20',
  );
  // Exported menu link: main-menu_stakeholder-engagement-strategy:node/66.
  $menu_links['main-menu_stakeholder-engagement-strategy:node/66'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/66',
    'router_path' => 'node/%',
    'link_title' => 'Stakeholder Engagement Strategy',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Stakeholder Engagement Strategy',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_stakeholder-engagement-strategy:node/66',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes:node/32',
  );
  // Exported menu link: main-menu_startseite:<front>.
  $menu_links['main-menu_startseite:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Startseite',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_startseite:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_stellungnahmen:schnittstellen/produkte/stellungnahmen.
  $menu_links['main-menu_stellungnahmen:schnittstellen/produkte/stellungnahmen'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'schnittstellen/produkte/stellungnahmen',
    'router_path' => 'schnittstellen/produkte/stellungnahmen',
    'link_title' => 'Stellungnahmen',
    'options' => array(
      'attributes' => array(
        'title' => 'Stellungnahmen',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_stellungnahmen:schnittstellen/produkte/stellungnahmen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo-produkte:node/13',
  );
  // Exported menu link: main-menu_studien:schnittstellen/produkte/studien.
  $menu_links['main-menu_studien:schnittstellen/produkte/studien'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'schnittstellen/produkte/studien',
    'router_path' => 'schnittstellen/produkte/studien',
    'link_title' => 'Studien',
    'options' => array(
      'attributes' => array(
        'title' => 'Studien',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_studien:schnittstellen/produkte/studien',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo-produkte:node/13',
  );
  // Exported menu link: main-menu_unsere-themen:node/44.
  $menu_links['main-menu_unsere-themen:node/44'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => 'Unsere Themen',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Biodiversität der Schwerpunkt unserer Arbeit',
      ),
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_unsere-themen:node/44',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_videos:node/735.
  $menu_links['main-menu_videos:node/735'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/735',
    'router_path' => 'node/%',
    'link_title' => 'Videos',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_videos:node/735',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo-produkte:node/13',
  );
  // Exported menu link: main-menu_was-sind-schnittstellen:node/35.
  $menu_links['main-menu_was-sind-schnittstellen:node/35'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/35',
    'router_path' => 'node/%',
    'link_title' => 'Was sind Schnittstellen?',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Was sind Schnittstellen?',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_was-sind-schnittstellen:node/35',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_schnittstellen-verstehen:node/7',
  );
  // Exported menu link: main-menu_was-wir-machen:node/80.
  $menu_links['main-menu_was-wir-machen:node/80'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/80',
    'router_path' => 'node/%',
    'link_title' => 'Was wir machen',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Was wir machen',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_was-wir-machen:node/80',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo:node/33',
  );
  // Exported menu link: main-menu_weitere-informationen-zu-ipbes:node/68.
  $menu_links['main-menu_weitere-informationen-zu-ipbes:node/68'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/68',
    'router_path' => 'node/%',
    'link_title' => 'Weitere Informationen zu IPBES',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Weitere Informationen zu IPBES',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_weitere-informationen-zu-ipbes:node/68',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_ipbes:node/32',
  );
  // Exported menu link: main-menu_weitere-informationen:node/892.
  $menu_links['main-menu_weitere-informationen:node/892'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/892',
    'router_path' => 'node/%',
    'link_title' => 'Weitere Informationen',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_weitere-informationen:node/892',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_eu-mechanismus:node/887',
  );
  // Exported menu link: main-menu_weitere-konventionen:node/36.
  $menu_links['main-menu_weitere-konventionen:node/36'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/36',
    'router_path' => 'node/%',
    'link_title' => 'weitere Konventionen',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Weitere Konventionen - UNFCCC, IPCC, UNCCD, Ramsar, CMS, CITES',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_weitere-konventionen:node/36',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_international:node/11',
  );
  // Exported menu link: main-menu_weitere-strategien:node/362.
  $menu_links['main-menu_weitere-strategien:node/362'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/362',
    'router_path' => 'node/%',
    'link_title' => 'Weitere Strategien',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_weitere-strategien:node/362',
      'attributes' => array(
        'title' => 'Nationale Nachhaltigkeitsstrategie und Deutsche Anpassungsstrategie an den Klimawandel',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_national:node/12',
  );
  // Exported menu link: main-menu_welche-schnittstellen-gibt-es:node/46.
  $menu_links['main-menu_welche-schnittstellen-gibt-es:node/46'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/46',
    'router_path' => 'node/%',
    'link_title' => 'Welche Schnittstellen gibt es?',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Welche Schnittstellen gibt es?',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_welche-schnittstellen-gibt-es:node/46',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_schnittstellen-verstehen:node/7',
  );
  // Exported menu link: main-menu_wer-wir-sind:node/48.
  $menu_links['main-menu_wer-wir-sind:node/48'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Wer wir sind',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Wer wir sind',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_wer-wir-sind:node/48',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nefo:node/33',
  );
  // Exported menu link: main-menu_workshops:node/65.
  $menu_links['main-menu_workshops:node/65'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65',
    'router_path' => 'node/%',
    'link_title' => 'Workshops',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Workshops',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_workshops:node/65',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_schnittstellen-verstehen:node/7',
  );
  // Exported menu link: main-menu_workshops:schnittstellen/produkte/workshops.
  $menu_links['main-menu_workshops:schnittstellen/produkte/workshops'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'schnittstellen/produkte/workshops',
    'router_path' => 'schnittstellen/produkte/workshops',
    'link_title' => 'Workshops',
    'options' => array(
      'attributes' => array(
        'title' => 'Workshops',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_workshops:schnittstellen/produkte/workshops',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_zahlen-und-fakten:node/59.
  $menu_links['main-menu_zahlen-und-fakten:node/59'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/59',
    'router_path' => 'node/%',
    'link_title' => 'Zahlen und Fakten',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Zahlen und Fakten',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_zahlen-und-fakten:node/59',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_national:node/12',
  );
  // Exported menu link: menu-nefo-footer-menu-fifth_beteiligung-an-ipbes:node/32.
  $menu_links['menu-nefo-footer-menu-fifth_beteiligung-an-ipbes:node/32'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fifth',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Beteiligung an IPBES',
    'options' => array(
      'attributes' => array(
        'title' => 'Beteiligung an IPBES',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fifth_beteiligung-an-ipbes:node/32',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-fifth_ipbes-news:http://biodiversity.de/de/schnittstellen/ipbes/news.
  $menu_links['menu-nefo-footer-menu-fifth_ipbes-news:http://biodiversity.de/de/schnittstellen/ipbes/news'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fifth',
    'link_path' => 'http://biodiversity.de/de/schnittstellen/ipbes/news',
    'router_path' => '',
    'link_title' => 'IPBES News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fifth_ipbes-news:http://biodiversity.de/de/schnittstellen/ipbes/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-fifth_nefo-produkte:node/13.
  $menu_links['menu-nefo-footer-menu-fifth_nefo-produkte:node/13'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fifth',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'NeFo Produkte',
    'options' => array(
      'attributes' => array(
        'title' => 'NeFo Produkte',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fifth_nefo-produkte:node/13',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-fifth_schnittstellen-verstehen:node/7.
  $menu_links['menu-nefo-footer-menu-fifth_schnittstellen-verstehen:node/7'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fifth',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Schnittstellen verstehen',
    'options' => array(
      'attributes' => array(
        'title' => 'Schnittstellen verstehen',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fifth_schnittstellen-verstehen:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-first_community-bezug:node/81.
  $menu_links['menu-nefo-footer-menu-first_community-bezug:node/81'] = array(
    'menu_name' => 'menu-nefo-footer-menu-first',
    'link_path' => 'node/81',
    'router_path' => 'node/%',
    'link_title' => 'Community-Bezug',
    'options' => array(
      'attributes' => array(
        'title' => 'Community-Bezug',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-first_community-bezug:node/81',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-first_nefo-produkte:http://biodiversity.de/de/schnittstellen/produkte.
  $menu_links['menu-nefo-footer-menu-first_nefo-produkte:http://biodiversity.de/de/schnittstellen/produkte'] = array(
    'menu_name' => 'menu-nefo-footer-menu-first',
    'link_path' => 'http://biodiversity.de/de/schnittstellen/produkte',
    'router_path' => '',
    'link_title' => 'NeFo-Produkte',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-first_nefo-produkte:http://biodiversity.de/de/schnittstellen/produkte',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-first_was-wir-machen:node/80.
  $menu_links['menu-nefo-footer-menu-first_was-wir-machen:node/80'] = array(
    'menu_name' => 'menu-nefo-footer-menu-first',
    'link_path' => 'node/80',
    'router_path' => 'node/%',
    'link_title' => 'Was wir machen',
    'options' => array(
      'attributes' => array(
        'title' => 'Was wir machen',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-first_was-wir-machen:node/80',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-first_wer-wir-sind:node/48.
  $menu_links['menu-nefo-footer-menu-first_wer-wir-sind:node/48'] = array(
    'menu_name' => 'menu-nefo-footer-menu-first',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Wer wir sind',
    'options' => array(
      'attributes' => array(
        'title' => 'Wer wir sind',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-first_wer-wir-sind:node/48',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-fourth_ausschreibungen:node/6.
  $menu_links['menu-nefo-footer-menu-fourth_ausschreibungen:node/6'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fourth',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Ausschreibungen',
    'options' => array(
      'attributes' => array(
        'title' => 'Ausschreibungen',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fourth_ausschreibungen:node/6',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-fourth_daten-und-infrastrukturen:node/28.
  $menu_links['menu-nefo-footer-menu-fourth_daten-und-infrastrukturen:node/28'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fourth',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Daten und Infrastrukturen',
    'options' => array(
      'attributes' => array(
        'title' => 'Daten und Infrastrukturen',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fourth_daten-und-infrastrukturen:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-fourth_einbringen-in-die-forschung:node/1.
  $menu_links['menu-nefo-footer-menu-fourth_einbringen-in-die-forschung:node/1'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fourth',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Einbringen in die Forschung',
    'options' => array(
      'attributes' => array(
        'title' => 'Einbringen in die Forschung',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fourth_einbringen-in-die-forschung:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-fourth_forschungsatlas:http://biodiversity.de/de/forschung/forschungsakteure/forschungsatlas.
  $menu_links['menu-nefo-footer-menu-fourth_forschungsatlas:http://biodiversity.de/de/forschung/forschungsakteure/forschungsatlas'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fourth',
    'link_path' => 'http://biodiversity.de/de/forschung/forschungsakteure/forschungsatlas',
    'router_path' => '',
    'link_title' => 'Forschungsatlas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fourth_forschungsatlas:http://biodiversity.de/de/forschung/forschungsakteure/forschungsatlas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-fourth_internationales:node/8.
  $menu_links['menu-nefo-footer-menu-fourth_internationales:node/8'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fourth',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Internationales',
    'options' => array(
      'attributes' => array(
        'title' => 'Internationales',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fourth_internationales:node/8',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-fourth_nachwuchswissenschaftler:node/67.
  $menu_links['menu-nefo-footer-menu-fourth_nachwuchswissenschaftler:node/67'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fourth',
    'link_path' => 'node/67',
    'router_path' => 'node/%',
    'link_title' => 'Nachwuchswissenschaftler',
    'options' => array(
      'attributes' => array(
        'title' => 'Biodiversity Science-Policy Interfaces Network (BSPIN)',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fourth_nachwuchswissenschaftler:node/67',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-nefo-footer-menu-fourth_netzwerke-und-vernetzung:node/37',
  );
  // Exported menu link: menu-nefo-footer-menu-fourth_netzwerke-und-vernetzung:node/37.
  $menu_links['menu-nefo-footer-menu-fourth_netzwerke-und-vernetzung:node/37'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fourth',
    'link_path' => 'node/37',
    'router_path' => 'node/%',
    'link_title' => 'Netzwerke und Vernetzung',
    'options' => array(
      'attributes' => array(
        'title' => 'Netzwerke und Vernetzung',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fourth_netzwerke-und-vernetzung:node/37',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-fourth_projekte:node/27.
  $menu_links['menu-nefo-footer-menu-fourth_projekte:node/27'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fourth',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Projekte',
    'options' => array(
      'attributes' => array(
        'title' => 'Projekte',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-fourth_projekte:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-second_access--benefit-sharing:taxonomy/term/38.
  $menu_links['menu-nefo-footer-menu-second_access--benefit-sharing:taxonomy/term/38'] = array(
    'menu_name' => 'menu-nefo-footer-menu-second',
    'link_path' => 'taxonomy/term/38',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Access & Benefit Sharing',
    'options' => array(
      'attributes' => array(
        'title' => 'Access & Benefit Sharing',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-second_access--benefit-sharing:taxonomy/term/38',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-second_bestubung:taxonomy/term/32.
  $menu_links['menu-nefo-footer-menu-second_bestubung:taxonomy/term/32'] = array(
    'menu_name' => 'menu-nefo-footer-menu-second',
    'link_path' => 'taxonomy/term/32',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bestäubung',
    'options' => array(
      'attributes' => array(
        'title' => 'Bestäubung',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-second_bestubung:taxonomy/term/32',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-second_biokonomie:taxonomy/term/35.
  $menu_links['menu-nefo-footer-menu-second_biokonomie:taxonomy/term/35'] = array(
    'menu_name' => 'menu-nefo-footer-menu-second',
    'link_path' => 'taxonomy/term/35',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bioökonomie',
    'options' => array(
      'attributes' => array(
        'title' => 'Bioökonomie',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-second_biokonomie:taxonomy/term/35',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-second_gesundheit:taxonomy/term/54.
  $menu_links['menu-nefo-footer-menu-second_gesundheit:taxonomy/term/54'] = array(
    'menu_name' => 'menu-nefo-footer-menu-second',
    'link_path' => 'taxonomy/term/54',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Gesundheit',
    'options' => array(
      'attributes' => array(
        'title' => 'Gesundheit',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-second_gesundheit:taxonomy/term/54',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-second_invasive-arten:taxonomy/term/37.
  $menu_links['menu-nefo-footer-menu-second_invasive-arten:taxonomy/term/37'] = array(
    'menu_name' => 'menu-nefo-footer-menu-second',
    'link_path' => 'taxonomy/term/37',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Invasive Arten',
    'options' => array(
      'attributes' => array(
        'title' => 'Invasive Arten',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-second_invasive-arten:taxonomy/term/37',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-second_klimawandel:taxonomy/term/39.
  $menu_links['menu-nefo-footer-menu-second_klimawandel:taxonomy/term/39'] = array(
    'menu_name' => 'menu-nefo-footer-menu-second',
    'link_path' => 'taxonomy/term/39',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Klimawandel',
    'options' => array(
      'attributes' => array(
        'title' => 'Klimawandel',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-second_klimawandel:taxonomy/term/39',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-second_kosystemleistungen:taxonomy/term/33.
  $menu_links['menu-nefo-footer-menu-second_kosystemleistungen:taxonomy/term/33'] = array(
    'menu_name' => 'menu-nefo-footer-menu-second',
    'link_path' => 'taxonomy/term/33',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Ökosystemleistungen',
    'options' => array(
      'attributes' => array(
        'title' => 'Ökosystemleistungen',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-second_kosystemleistungen:taxonomy/term/33',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-second_landnutzung:taxonomy/term/31.
  $menu_links['menu-nefo-footer-menu-second_landnutzung:taxonomy/term/31'] = array(
    'menu_name' => 'menu-nefo-footer-menu-second',
    'link_path' => 'taxonomy/term/31',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Landnutzung',
    'options' => array(
      'attributes' => array(
        'title' => 'Landnutzung',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-second_landnutzung:taxonomy/term/31',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-second_monitoring:taxonomy/term/36.
  $menu_links['menu-nefo-footer-menu-second_monitoring:taxonomy/term/36'] = array(
    'menu_name' => 'menu-nefo-footer-menu-second',
    'link_path' => 'taxonomy/term/36',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Monitoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Monitoring',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-second_monitoring:taxonomy/term/36',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-third_europisch:node/49.
  $menu_links['menu-nefo-footer-menu-third_europisch:node/49'] = array(
    'menu_name' => 'menu-nefo-footer-menu-third',
    'link_path' => 'node/49',
    'router_path' => 'node/%',
    'link_title' => 'Europäisch',
    'options' => array(
      'attributes' => array(
        'title' => 'Europäisch',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-third_europisch:node/49',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-third_international:node/11.
  $menu_links['menu-nefo-footer-menu-third_international:node/11'] = array(
    'menu_name' => 'menu-nefo-footer-menu-third',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'International',
    'options' => array(
      'attributes' => array(
        'title' => 'International',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-third_international:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-footer-menu-third_national:node/12.
  $menu_links['menu-nefo-footer-menu-third_national:node/12'] = array(
    'menu_name' => 'menu-nefo-footer-menu-third',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'National',
    'options' => array(
      'attributes' => array(
        'title' => 'National',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-footer-menu-third_national:node/12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-login-menu_abmelden:user/logout.
  $menu_links['menu-nefo-login-menu_abmelden:user/logout'] = array(
    'menu_name' => 'menu-nefo-login-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Abmelden',
    'options' => array(
      'attributes' => array(
        'title' => 'Abmelden',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-login-menu_abmelden:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-login-menu_anmelden:user/login.
  $menu_links['menu-nefo-login-menu_anmelden:user/login'] = array(
    'menu_name' => 'menu-nefo-login-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Anmelden',
    'options' => array(
      'attributes' => array(
        'title' => 'Anmelden',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-login-menu_anmelden:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-login-menu_login:user/login.
  $menu_links['menu-nefo-login-menu_login:user/login'] = array(
    'menu_name' => 'menu-nefo-login-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => 'Login',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-login-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-login-menu_logout:user/logout.
  $menu_links['menu-nefo-login-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-nefo-login-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => 'Logout',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-login-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-top-menu_ber-biodiversitt:node/42.
  $menu_links['menu-nefo-top-menu_ber-biodiversitt:node/42'] = array(
    'menu_name' => 'menu-nefo-top-menu',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Über Biodiversität',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-nefo-top-menu_ber-biodiversitt:node/42',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-top-menu_contact:node/581.
  $menu_links['menu-nefo-top-menu_contact:node/581'] = array(
    'menu_name' => 'menu-nefo-top-menu',
    'link_path' => 'node/581',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Contact',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-top-menu_contact:node/581',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-top-menu_eigene-pressemitteilungen:presse/pressemitteilungen.
  $menu_links['menu-nefo-top-menu_eigene-pressemitteilungen:presse/pressemitteilungen'] = array(
    'menu_name' => 'menu-nefo-top-menu',
    'link_path' => 'presse/pressemitteilungen',
    'router_path' => 'presse/pressemitteilungen',
    'link_title' => 'Eigene Pressemitteilungen',
    'options' => array(
      'attributes' => array(
        'title' => 'Eigene Pressemitteilungen',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-top-menu_eigene-pressemitteilungen:presse/pressemitteilungen',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-nefo-top-menu_presse:presse',
  );
  // Exported menu link: menu-nefo-top-menu_glossar:node/23.
  $menu_links['menu-nefo-top-menu_glossar:node/23'] = array(
    'menu_name' => 'menu-nefo-top-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Glossar',
    'options' => array(
      'attributes' => array(
        'title' => 'Glossar',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-top-menu_glossar:node/23',
      'node_type' => 'page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-top-menu_impressum:node/9.
  $menu_links['menu-nefo-top-menu_impressum:node/9'] = array(
    'menu_name' => 'menu-nefo-top-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Impressum',
    'options' => array(
      'attributes' => array(
        'title' => 'Impressum',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-top-menu_impressum:node/9',
      'node_type' => 'page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-top-menu_kontakt:node/34.
  $menu_links['menu-nefo-top-menu_kontakt:node/34'] = array(
    'menu_name' => 'menu-nefo-top-menu',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(
        'title' => 'Kontakt',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-top-menu_kontakt:node/34',
      'node_type' => 'page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-top-menu_legal:node/580.
  $menu_links['menu-nefo-top-menu_legal:node/580'] = array(
    'menu_name' => 'menu-nefo-top-menu',
    'link_path' => 'node/580',
    'router_path' => 'node/%',
    'link_title' => 'Legal',
    'options' => array(
      'node_type' => 'page',
      'attributes' => array(
        'title' => 'Legal',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-top-menu_legal:node/580',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nefo-top-menu_presse:presse.
  $menu_links['menu-nefo-top-menu_presse:presse'] = array(
    'menu_name' => 'menu-nefo-top-menu',
    'link_path' => 'presse',
    'router_path' => 'presse',
    'link_title' => 'Presse',
    'options' => array(
      'attributes' => array(
        'title' => 'Presse',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-nefo-top-menu_presse:presse',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abmelden');
  t('Access & Benefit Sharing');
  t('Agrarpolitik');
  t('Aktuelle Aufrufe');
  t('Aktuelle Aufrufe zur Beteiligung im IPBES -Prozess');
  t('Anmelden');
  t('Ausschreibungen');
  t('BSPIN/ Nachwuchswissenschaftler');
  t('Bei IPBES aktiv werden');
  t('Berichte');
  t('Bestäubung');
  t('Beteiligung an IPBES');
  t('Biodiversitätsmonitoring');
  t('Bioökonomie');
  t('CBD');
  t('COP');
  t('Citizen Science');
  t('Community-Bezug');
  t('Contact');
  t('Daten beitragen');
  t('Daten und Infrastrukturen');
  t('Deutsche IPBES-Aktive');
  t('Deutsche Unterstützungsstruktur');
  t('EKLIPSE - Mechanismus');
  t('EU-Mechanismus');
  t('EU-Netzwerk von Netzwerken als Basis');
  t('Eigene Pressemitteilungen');
  t('Einbringen in die Forschung');
  t('Europäisch');
  t('Faktenblätter');
  t('Forschung');
  t('Forschungsakteure');
  t('Forschungsatlas');
  t('Forschungsbedarf');
  t('Forschungsblogs');
  t('Future Earth');
  t('GeoBon');
  t('Gesundheit');
  t('Glossar');
  t('Hintergrund: EU-Politikberatung zur Biodiversität');
  t('IPBES');
  t('IPBES & Co.');
  t('IPBES Arbeitsprogramm');
  t('IPBES Assessments');
  t('IPBES FAQ');
  t('IPBES Historie');
  t('IPBES News');
  t('IPBES Nominierungsprozess');
  t('Impressum');
  t('Institutionen');
  t('International');
  t('Internationales');
  t('Interviews');
  t('Invasive Arten');
  t('Klimawandel');
  t('Kommentierte Verweisliste');
  t('Kontakt');
  t('Landnutzung');
  t('Legal');
  t('Literatur über IPBES');
  t('Literaturtipps');
  t('Login');
  t('Logout');
  t('Monitoring');
  t('Nachwuchswissenschaftler');
  t('National');
  t('Nationale Biodiversitätsstrategie');
  t('Naturschutzgesetze EU');
  t('NeFo');
  t('NeFo Blogs');
  t('NeFo Produkte');
  t('NeFo-Produkte');
  t('NeFo-Sachstandsberichte');
  t('Netzwerke und Vernetzung');
  t('Newsletter-Archiv');
  t('Pan European Stakeholder Consultation');
  t('Personen');
  t('Politik');
  t('Presse');
  t('Projekte');
  t('Publikationen mit NeFo-Beteiligung');
  t('Rollen von Expertinnen und Experten');
  t('SBSTTA');
  t('Schnittstellen verstehen');
  t('Stakeholder Engagement Strategy');
  t('Startseite');
  t('Stellungnahmen');
  t('Studien');
  t('Unsere Themen');
  t('Videos');
  t('Was sind Schnittstellen?');
  t('Was wir machen');
  t('Weitere Informationen');
  t('Weitere Informationen zu IPBES');
  t('Weitere Strategien');
  t('Welche Schnittstellen gibt es?');
  t('Wer wir sind');
  t('Workshops');
  t('Zahlen und Fakten');
  t('gti-Kontaktstelle');
  t('weitere Konventionen');
  t('Ökosystemleistungen');
  t('Über Biodiversität');
  t('Über IPBES');

  return $menu_links;
}
