<?php

/**
 * @file
 * Contains the views_z6 style plugin.
 */

class views_plugin_style_views_z6 extends views_plugin_style {

  /**
   * Set default options
   */
  // function options(&$options) {
    // parent::options($options);


function option_definition() {
    $options = parent::option_definition();
    $options['layout_type'] = array('default' => 'padding_container');
    return $options;
  }

  /**
   * Render the given style.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['layout_type'] = array(
      '#type' => 'radios',
      '#title' => t('Layout Type'),
      '#options' => array('full_width_container' => t('Full width container'), 'padding_container' => t('Container with padding'), 'halfs_container' => t('Container with 2 50% regions'), 'thirds_container' => t('Container with 3 33% regions'), 'quarters_container' => t('Container with 4 25% regions')),
      '#default_value' => $this->options['layout_type'],
      '#description' => t('Using this format will print out this View in a markup format just like the core Backdrop 1.4+ layouts but instead relying on the Zurb Foundation 6 flexbox-based grid system. You must be using a Foundation 6 theme with grid included or layout to see the effects.'),
    );

  }

}
