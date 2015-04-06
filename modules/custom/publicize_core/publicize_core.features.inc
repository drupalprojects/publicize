<?php
/**
 * @file
 * publicize_core.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function publicize_core_image_default_styles() {
  $styles = array();

  // Exported image style: listing-pages-thumb.
  $styles['listing-pages-thumb'] = array(
    'name' => 'listing-pages-thumb',
    'label' => 'listing-pages-thumb',
    'effects' => array(
      4 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imageinfo_cache_effect_router',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 300,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
          '#imageinfo_cache_effect_callback' => 'imagefield_focus_scale_and_crop_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile-page-flexslider.
  $styles['profile-page-flexslider'] = array(
    'name' => 'profile-page-flexslider',
    'label' => 'profile-page-flexslider',
    'effects' => array(
      2 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imageinfo_cache_effect_router',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 640,
          'strength' => 'medium',
          'fallback' => 'image',
          '#imageinfo_cache_effect_callback' => 'imagefield_focus_scale_and_crop_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_images.
  $styles['project_images'] = array(
    'name' => 'project_images',
    'label' => 'Project Images',
    'effects' => array(
      3 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'imageinfo_cache_effect_router',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 600,
          'upscale' => 1,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: recent-posts-thumbs.
  $styles['recent-posts-thumbs'] = array(
    'name' => 'recent-posts-thumbs',
    'label' => 'recent-posts-thumbs',
    'effects' => array(
      5 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'imageinfo_cache_effect_router',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
          'upscale' => 1,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square-profile-portrait.
  $styles['square-profile-portrait'] = array(
    'name' => 'square-profile-portrait',
    'label' => 'square-profile-portrait',
    'effects' => array(
      1 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imageinfo_cache_effect_router',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
          'strength' => 'high',
          'fallback' => 'smartcrop',
          '#imageinfo_cache_effect_callback' => 'imagefield_focus_scale_and_crop_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
