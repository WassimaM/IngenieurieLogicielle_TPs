<?php

error_reporting(E_ALL);

/**
 * untitledModel - class.Livres.php
 *
 * $Id$
 *
 * This file is part of untitledModel.
 *
 * Automatically generated on 04.01.2020, 00:01:57 with ArgoUML PHP module 
 * (last revised $Date: 2010-01-12 20:14:42 +0100 (Tue, 12 Jan 2010) $)
 *
 * @author firstname and lastname of author, <author@example.org>
 */

if (0 > version_compare(PHP_VERSION, '5')) {
    die('This file was generated for PHP 5');
}

/**
 * include Emprunte
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.Emprunte.php');

/**
 * include volumes
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.volumes.php');

/* user defined includes */
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A60-includes begin
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A60-includes end

/* user defined constants */
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A60-constants begin
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A60-constants end

/**
 * Short description of class Livres
 *
 * @access public
 * @author firstname and lastname of author, <author@example.org>
 */
class Livres
    extends volumes
{
    // --- ASSOCIATIONS ---
    // generateAssociationEnd : 

    // --- ATTRIBUTES ---

    /**
     * Short description of attribute disponible
     *
     * @access public
     * @var boolean
     */
    public $disponible = false;

    // --- OPERATIONS ---

    /**
     * Short description of method empruntable
     *
     * @access public
     * @author firstname and lastname of author, <author@example.org>
     * @return mixed
     */
    public function empruntable()
    {
        // section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A6C begin
        // section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A6C end
    }

} /* end of class Livres */

?>