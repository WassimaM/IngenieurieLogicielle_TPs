<?php

error_reporting(E_ALL);

/**
 * untitledModel - class.adhérents.php
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
 * include bobliotheque
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.bobliotheque.php');

/* user defined includes */
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A24-includes begin
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A24-includes end

/* user defined constants */
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A24-constants begin
// section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A24-constants end

/**
 * Short description of class adhérents
 *
 * @access public
 * @author firstname and lastname of author, <author@example.org>
 */
class adhérents
{
    // --- ASSOCIATIONS ---
    // generateAssociationEnd :     // generateAssociationEnd : 

    // --- ATTRIBUTES ---

    /**
     * Short description of attribute prenom
     *
     * @access public
     * @var string
     */
    public $prenom = '';

    /**
     * Short description of attribute nom
     *
     * @access public
     * @var string
     */
    public $nom = '';

    // --- OPERATIONS ---

    /**
     * Short description of method emprunt_Livre
     *
     * @access public
     * @author firstname and lastname of author, <author@example.org>
     * @return mixed
     */
    public function emprunt_Livre()
    {
        // section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A37 begin
        // section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A37 end
    }

    /**
     * Short description of method restituer_Livre
     *
     * @access public
     * @author firstname and lastname of author, <author@example.org>
     * @return mixed
     */
    public function restituer_Livre()
    {
        // section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A61 begin
        // section -64--88--103-1--9396a5f:16e1cf07d95:-8000:0000000000001A61 end
    }

} /* end of class adhérents */

?>