<?php

error_reporting(E_ALL);

/**
 * untitledModel - class.Emprunte.php
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
 * include Livres
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.Livres.php');

/**
 * include adhérents
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.adhérents.php');

/* user defined includes */
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A6E-includes begin
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A6E-includes end

/* user defined constants */
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A6E-constants begin
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A6E-constants end

/**
 * Short description of class Emprunte
 *
 * @access public
 * @author firstname and lastname of author, <author@example.org>
 */
class Emprunte
{
    // --- ASSOCIATIONS ---
    // generateAssociationEnd :     // generateAssociationEnd : 

    // --- ATTRIBUTES ---

    /**
     * Short description of attribute date_emprunt
     *
     * @access public
     * @var date
     */
    public $date_emprunt = null;

    /**
     * Short description of attribute date_retour
     *
     * @access public
     * @var date
     */
    public $date_retour = null;

    // --- OPERATIONS ---

    /**
     * Short description of method pronologie_dateretour
     *
     * @access public
     * @author firstname and lastname of author, <author@example.org>
     * @return mixed
     */
    public function pronologie_dateretour()
    {
        // section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A76 begin
        // section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A76 end
    }

} /* end of class Emprunte */

?>