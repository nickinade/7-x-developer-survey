/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

/**
 * Added in version 7.0.0
 *
 * Geographical regions associated with identification documents
 */
typedef NS_ENUM(NSUInteger, SDCIdCaptureRegion) {
/**
     * Added in version 7.0.0
     *
     * Any Region.
     */
    SDCIdCaptureRegionAny,
/**
     * Added in version 7.0.0
     *
     * Any country contained in EU or Schengen Area, for simplicity this also includes the following states: SDCIdCaptureRegionAndorra, SDCIdCaptureRegionMonaco, SDCIdCaptureRegionSanMarino, SDCIdCaptureRegionHolySee
     */
    SDCIdCaptureRegionEuAndSchengen,
/**
     * Added in version 7.0.0
     *
     * Aruba.
     */
    SDCIdCaptureRegionAruba,
/**
     * Added in version 7.0.0
     *
     * Afghanistan.
     */
    SDCIdCaptureRegionAfghanistan,
/**
     * Added in version 7.0.0
     *
     * Angola.
     */
    SDCIdCaptureRegionAngola,
/**
     * Added in version 7.0.0
     *
     * Anguilla.
     */
    SDCIdCaptureRegionAnguilla,
/**
     * Added in version 7.0.0
     *
     * Åland Islands.
     */
    SDCIdCaptureRegionAlandIslands,
/**
     * Added in version 7.0.0
     *
     * Albania.
     */
    SDCIdCaptureRegionAlbania,
/**
     * Added in version 7.0.0
     *
     * Andorra.
     */
    SDCIdCaptureRegionAndorra,
/**
     * Added in version 7.0.0
     *
     * United Arab Emirates.
     */
    SDCIdCaptureRegionUae,
/**
     * Added in version 7.0.0
     *
     * Argentina.
     */
    SDCIdCaptureRegionArgentina,
/**
     * Added in version 7.0.0
     *
     * Armenia.
     */
    SDCIdCaptureRegionArmenia,
/**
     * Added in version 7.0.0
     *
     * American Samoa.
     */
    SDCIdCaptureRegionAmericanSamoa,
/**
     * Added in version 7.0.0
     *
     * Antarctica.
     */
    SDCIdCaptureRegionAntarctica,
/**
     * Added in version 7.0.0
     *
     * French Southern Territories.
     */
    SDCIdCaptureRegionFrenchSouthernTerritories,
/**
     * Added in version 7.0.0
     *
     * Antigua and Barbuda.
     */
    SDCIdCaptureRegionAntiguaAndBarbuda,
/**
     * Added in version 7.0.0
     *
     * Australia.
     */
    SDCIdCaptureRegionAustralia,
/**
     * Added in version 7.0.0
     *
     * Austria.
     */
    SDCIdCaptureRegionAustria,
/**
     * Added in version 7.0.0
     *
     * Azerbaijan.
     */
    SDCIdCaptureRegionAzerbaijan,
/**
     * Added in version 7.0.0
     *
     * Burundi.
     */
    SDCIdCaptureRegionBurundi,
/**
     * Added in version 7.0.0
     *
     * Belgium.
     */
    SDCIdCaptureRegionBelgium,
/**
     * Added in version 7.0.0
     *
     * Benin.
     */
    SDCIdCaptureRegionBenin,
/**
     * Added in version 7.0.0
     *
     * Bonaire, Sint Eustatius and Saba.
     */
    SDCIdCaptureRegionBonaireSintEustatiusAndSaba,
/**
     * Added in version 7.0.0
     *
     * Burkina Faso.
     */
    SDCIdCaptureRegionBurkinaFaso,
/**
     * Added in version 7.0.0
     *
     * Bangladesh.
     */
    SDCIdCaptureRegionBangladesh,
/**
     * Added in version 7.0.0
     *
     * Bulgaria.
     */
    SDCIdCaptureRegionBulgaria,
/**
     * Added in version 7.0.0
     *
     * Bahrain.
     */
    SDCIdCaptureRegionBahrain,
/**
     * Added in version 7.0.0
     *
     * Bahamas.
     */
    SDCIdCaptureRegionBahamas,
/**
     * Added in version 7.0.0
     *
     * Bosnia and Herzegovina.
     */
    SDCIdCaptureRegionBosniaHerzegovina,
/**
     * Added in version 7.0.0
     *
     * Saint Barthélemy.
     */
    SDCIdCaptureRegionSaintBarthelemy,
/**
     * Added in version 7.0.0
     *
     * Belarus.
     */
    SDCIdCaptureRegionBelarus,
/**
     * Added in version 7.0.0
     *
     * Belize.
     */
    SDCIdCaptureRegionBelize,
/**
     * Added in version 7.0.0
     *
     * Bermuda.
     */
    SDCIdCaptureRegionBermuda,
/**
     * Added in version 7.0.0
     *
     * Bolivia, Plurinational State of.
     */
    SDCIdCaptureRegionBolivia,
/**
     * Added in version 7.0.0
     *
     * Brazil.
     */
    SDCIdCaptureRegionBrazil,
/**
     * Added in version 7.0.0
     *
     * Barbados.
     */
    SDCIdCaptureRegionBarbados,
/**
     * Added in version 7.0.0
     *
     * Brunei Darussalam.
     */
    SDCIdCaptureRegionBruneiDarussalam,
/**
     * Added in version 7.0.0
     *
     * Bhutan.
     */
    SDCIdCaptureRegionBhutan,
/**
     * Added in version 7.0.0
     *
     * Bouvet Island.
     */
    SDCIdCaptureRegionBouvetIsland,
/**
     * Added in version 7.0.0
     *
     * Botswana.
     */
    SDCIdCaptureRegionBotswana,
/**
     * Added in version 7.0.0
     *
     * Central African Republic.
     */
    SDCIdCaptureRegionCar,
/**
     * Added in version 7.0.0
     *
     * Canada.
     */
    SDCIdCaptureRegionCanada,
/**
     * Added in version 7.0.0
     *
     * Cocos (Keeling) Islands.
     */
    SDCIdCaptureRegionCocosIslands,
/**
     * Added in version 7.0.0
     *
     * Switzerland.
     */
    SDCIdCaptureRegionSwitzerland,
/**
     * Added in version 7.0.0
     *
     * Chile.
     */
    SDCIdCaptureRegionChile,
/**
     * Added in version 7.0.0
     *
     * China.
     */
    SDCIdCaptureRegionChina,
/**
     * Added in version 7.0.0
     *
     * Côte d’Ivoire.
     */
    SDCIdCaptureRegionCoteIvoire,
/**
     * Added in version 7.0.0
     *
     * Cameroon.
     */
    SDCIdCaptureRegionCameroon,
/**
     * Added in version 7.0.0
     *
     * Democratic Republic of the Congo.
     */
    SDCIdCaptureRegionDemocraticRepublicOfCongo,
/**
     * Added in version 7.0.0
     *
     * Congo.
     */
    SDCIdCaptureRegionCongo,
/**
     * Added in version 7.0.0
     *
     * Cook Islands.
     */
    SDCIdCaptureRegionCookIslands,
/**
     * Added in version 7.0.0
     *
     * Colombia.
     */
    SDCIdCaptureRegionColombia,
/**
     * Added in version 7.0.0
     *
     * Comoros.
     */
    SDCIdCaptureRegionComoros,
/**
     * Added in version 7.0.0
     *
     * Cabo Verde.
     */
    SDCIdCaptureRegionCaboVerde,
/**
     * Added in version 7.0.0
     *
     * Costa Rica.
     */
    SDCIdCaptureRegionCostaRica,
/**
     * Added in version 7.0.0
     *
     * Cuba.
     */
    SDCIdCaptureRegionCuba,
/**
     * Added in version 7.0.0
     *
     * Curaçao.
     */
    SDCIdCaptureRegionCuracao,
/**
     * Added in version 7.0.0
     *
     * Christmas Island.
     */
    SDCIdCaptureRegionChristmasIsland,
/**
     * Added in version 7.0.0
     *
     * Cayman Islands.
     */
    SDCIdCaptureRegionCaymanIslands,
/**
     * Added in version 7.0.0
     *
     * Cyprus.
     */
    SDCIdCaptureRegionCyprus,
/**
     * Added in version 7.0.0
     *
     * Czechia.
     */
    SDCIdCaptureRegionCzechia,
/**
     * Added in version 7.0.0
     *
     * Germany.
     */
    SDCIdCaptureRegionGermany,
/**
     * Added in version 7.0.0
     *
     * Djibouti.
     */
    SDCIdCaptureRegionDjibouti,
/**
     * Added in version 7.0.0
     *
     * Dominica.
     */
    SDCIdCaptureRegionDominica,
/**
     * Added in version 7.0.0
     *
     * Denmark.
     */
    SDCIdCaptureRegionDenmark,
/**
     * Added in version 7.0.0
     *
     * Dominican Republic.
     */
    SDCIdCaptureRegionDominicanRepublic,
/**
     * Added in version 7.0.0
     *
     * Algeria.
     */
    SDCIdCaptureRegionAlgeria,
/**
     * Added in version 7.0.0
     *
     * Ecuador.
     */
    SDCIdCaptureRegionEcuador,
/**
     * Added in version 7.0.0
     *
     * Egypt.
     */
    SDCIdCaptureRegionEgypt,
/**
     * Added in version 7.0.0
     *
     * Eritrea.
     */
    SDCIdCaptureRegionEritrea,
/**
     * Added in version 7.0.0
     *
     * Western Sahara.
     */
    SDCIdCaptureRegionWesternSahara,
/**
     * Added in version 7.0.0
     *
     * Spain.
     */
    SDCIdCaptureRegionSpain,
/**
     * Added in version 7.0.0
     *
     * Estonia.
     */
    SDCIdCaptureRegionEstonia,
/**
     * Added in version 7.0.0
     *
     * Ethiopia.
     */
    SDCIdCaptureRegionEthiopia,
/**
     * Added in version 7.0.0
     *
     * Finland.
     */
    SDCIdCaptureRegionFinland,
/**
     * Added in version 7.0.0
     *
     * Fiji.
     */
    SDCIdCaptureRegionFiji,
/**
     * Added in version 7.0.0
     *
     * Falkland Islands (Malvinas).
     */
    SDCIdCaptureRegionFalklandIslands,
/**
     * Added in version 7.0.0
     *
     * France.
     */
    SDCIdCaptureRegionFrance,
/**
     * Added in version 7.0.0
     *
     * Faroe Islands.
     */
    SDCIdCaptureRegionFaroeIslands,
/**
     * Added in version 7.0.0
     *
     * Micronesia, Federated States of.
     */
    SDCIdCaptureRegionMicronesia,
/**
     * Added in version 7.0.0
     *
     * Gabon.
     */
    SDCIdCaptureRegionGabon,
/**
     * Added in version 7.0.0
     *
     * United Kingdom of Great Britain and Northern Ireland.
     */
    SDCIdCaptureRegionUk,
/**
     * Added in version 7.0.0
     *
     * Georgia.
     */
    SDCIdCaptureRegionGeorgia,
/**
     * Added in version 7.0.0
     *
     * Guernsey.
     */
    SDCIdCaptureRegionGuernsey,
/**
     * Added in version 7.0.0
     *
     * Ghana.
     */
    SDCIdCaptureRegionGhana,
/**
     * Added in version 7.0.0
     *
     * Gibraltar.
     */
    SDCIdCaptureRegionGibraltar,
/**
     * Added in version 7.0.0
     *
     * Guinea.
     */
    SDCIdCaptureRegionGuinea,
/**
     * Added in version 7.0.0
     *
     * Guadeloupe.
     */
    SDCIdCaptureRegionGuadeloupe,
/**
     * Added in version 7.0.0
     *
     * Gambia.
     */
    SDCIdCaptureRegionGambia,
/**
     * Added in version 7.0.0
     *
     * Guinea-Bissau.
     */
    SDCIdCaptureRegionGuineaBissau,
/**
     * Added in version 7.0.0
     *
     * Equatorial Guinea.
     */
    SDCIdCaptureRegionEquatorialGuinea,
/**
     * Added in version 7.0.0
     *
     * Greece.
     */
    SDCIdCaptureRegionGreece,
/**
     * Added in version 7.0.0
     *
     * Grenada.
     */
    SDCIdCaptureRegionGrenada,
/**
     * Added in version 7.0.0
     *
     * Greenland.
     */
    SDCIdCaptureRegionGreenland,
/**
     * Added in version 7.0.0
     *
     * Guatemala.
     */
    SDCIdCaptureRegionGuatemala,
/**
     * Added in version 7.0.0
     *
     * French Guiana.
     */
    SDCIdCaptureRegionFrenchGuiana,
/**
     * Added in version 7.0.0
     *
     * Guam.
     */
    SDCIdCaptureRegionGuam,
/**
     * Added in version 7.0.0
     *
     * Guyana.
     */
    SDCIdCaptureRegionGuyana,
/**
     * Added in version 7.0.0
     *
     * Hong Kong.
     */
    SDCIdCaptureRegionHongKong,
/**
     * Added in version 7.0.0
     *
     * Heard Island and McDonald Islands.
     */
    SDCIdCaptureRegionHeardIslandAndMcDonaldIslands,
/**
     * Added in version 7.0.0
     *
     * Honduras.
     */
    SDCIdCaptureRegionHonduras,
/**
     * Added in version 7.0.0
     *
     * Croatia.
     */
    SDCIdCaptureRegionCroatia,
/**
     * Added in version 7.0.0
     *
     * Haiti.
     */
    SDCIdCaptureRegionHaiti,
/**
     * Added in version 7.0.0
     *
     * Hungary.
     */
    SDCIdCaptureRegionHungary,
/**
     * Added in version 7.0.0
     *
     * Indonesia.
     */
    SDCIdCaptureRegionIndonesia,
/**
     * Added in version 7.0.0
     *
     * Isle of Man.
     */
    SDCIdCaptureRegionIsleOfMan,
/**
     * Added in version 7.0.0
     *
     * India.
     */
    SDCIdCaptureRegionIndia,
/**
     * Added in version 7.0.0
     *
     * British Indian Ocean Territory.
     */
    SDCIdCaptureRegionBritishIndianOceanTerritory,
/**
     * Added in version 7.0.0
     *
     * Ireland.
     */
    SDCIdCaptureRegionIreland,
/**
     * Added in version 7.0.0
     *
     * Iran, Islamic Republic of.
     */
    SDCIdCaptureRegionIran,
/**
     * Added in version 7.0.0
     *
     * Iraq.
     */
    SDCIdCaptureRegionIraq,
/**
     * Added in version 7.0.0
     *
     * Iceland.
     */
    SDCIdCaptureRegionIceland,
/**
     * Added in version 7.0.0
     *
     * Israel.
     */
    SDCIdCaptureRegionIsrael,
/**
     * Added in version 7.0.0
     *
     * Italy.
     */
    SDCIdCaptureRegionItaly,
/**
     * Added in version 7.0.0
     *
     * Jamaica.
     */
    SDCIdCaptureRegionJamaica,
/**
     * Added in version 7.0.0
     *
     * Jersey.
     */
    SDCIdCaptureRegionJersey,
/**
     * Added in version 7.0.0
     *
     * Jordan.
     */
    SDCIdCaptureRegionJordan,
/**
     * Added in version 7.0.0
     *
     * Japan.
     */
    SDCIdCaptureRegionJapan,
/**
     * Added in version 7.0.0
     *
     * Kazakhstan.
     */
    SDCIdCaptureRegionKazakhstan,
/**
     * Added in version 7.0.0
     *
     * Kenya.
     */
    SDCIdCaptureRegionKenya,
/**
     * Added in version 7.0.0
     *
     * Kyrgyzstan.
     */
    SDCIdCaptureRegionKyrgyzstan,
/**
     * Added in version 7.0.0
     *
     * Cambodia.
     */
    SDCIdCaptureRegionCambodia,
/**
     * Added in version 7.0.0
     *
     * Kiribati.
     */
    SDCIdCaptureRegionKiribati,
/**
     * Added in version 7.0.0
     *
     * Saint Kitts and Nevis.
     */
    SDCIdCaptureRegionSaintKittsAndNevis,
/**
     * Added in version 7.0.0
     *
     * Korea, Republic of.
     */
    SDCIdCaptureRegionSouthKorea,
/**
     * Added in version 7.0.0
     *
     * Kuwait.
     */
    SDCIdCaptureRegionKuwait,
/**
     * Added in version 7.0.0
     *
     * Lao People’s Democratic Republic.
     */
    SDCIdCaptureRegionLao,
/**
     * Added in version 7.0.0
     *
     * Lebanon.
     */
    SDCIdCaptureRegionLebanon,
/**
     * Added in version 7.0.0
     *
     * Liberia.
     */
    SDCIdCaptureRegionLiberia,
/**
     * Added in version 7.0.0
     *
     * Libya.
     */
    SDCIdCaptureRegionLibya,
/**
     * Added in version 7.0.0
     *
     * Saint Lucia.
     */
    SDCIdCaptureRegionSaintLucia,
/**
     * Added in version 7.0.0
     *
     * Liechtenstein.
     */
    SDCIdCaptureRegionLiechtenstein,
/**
     * Added in version 7.0.0
     *
     * Sri Lanka.
     */
    SDCIdCaptureRegionSriLanka,
/**
     * Added in version 7.0.0
     *
     * Lesotho.
     */
    SDCIdCaptureRegionLesotho,
/**
     * Added in version 7.0.0
     *
     * Lithuania.
     */
    SDCIdCaptureRegionLithuania,
/**
     * Added in version 7.0.0
     *
     * Luxembourg.
     */
    SDCIdCaptureRegionLuxembourg,
/**
     * Added in version 7.0.0
     *
     * Latvia.
     */
    SDCIdCaptureRegionLatvia,
/**
     * Added in version 7.0.0
     *
     * Macao.
     */
    SDCIdCaptureRegionMacao,
/**
     * Added in version 7.0.0
     *
     * Saint Martin (French part).
     */
    SDCIdCaptureRegionFrenchSaintMartin,
/**
     * Added in version 7.0.0
     *
     * Morocco.
     */
    SDCIdCaptureRegionMorocco,
/**
     * Added in version 7.0.0
     *
     * Monaco.
     */
    SDCIdCaptureRegionMonaco,
/**
     * Added in version 7.0.0
     *
     * Moldova, Republic of.
     */
    SDCIdCaptureRegionMoldova,
/**
     * Added in version 7.0.0
     *
     * Madagascar.
     */
    SDCIdCaptureRegionMadagascar,
/**
     * Added in version 7.0.0
     *
     * Maldives.
     */
    SDCIdCaptureRegionMaldives,
/**
     * Added in version 7.0.0
     *
     * Mexico.
     */
    SDCIdCaptureRegionMexico,
/**
     * Added in version 7.0.0
     *
     * Marshall Islands.
     */
    SDCIdCaptureRegionMarshallIslands,
/**
     * Added in version 7.0.0
     *
     * North Macedonia.
     */
    SDCIdCaptureRegionNorthMacedonia,
/**
     * Added in version 7.0.0
     *
     * Mali.
     */
    SDCIdCaptureRegionMali,
/**
     * Added in version 7.0.0
     *
     * Malta.
     */
    SDCIdCaptureRegionMalta,
/**
     * Added in version 7.0.0
     *
     * Myanmar.
     */
    SDCIdCaptureRegionMyanmar,
/**
     * Added in version 7.0.0
     *
     * Montenegro.
     */
    SDCIdCaptureRegionMontenegro,
/**
     * Added in version 7.0.0
     *
     * Mongolia.
     */
    SDCIdCaptureRegionMongolia,
/**
     * Added in version 7.0.0
     *
     * Northern Mariana Islands.
     */
    SDCIdCaptureRegionNorthernMarianaIslands,
/**
     * Added in version 7.0.0
     *
     * Mozambique.
     */
    SDCIdCaptureRegionMozambique,
/**
     * Added in version 7.0.0
     *
     * Mauritania.
     */
    SDCIdCaptureRegionMauritania,
/**
     * Added in version 7.0.0
     *
     * Montserrat.
     */
    SDCIdCaptureRegionMontserrat,
/**
     * Added in version 7.0.0
     *
     * Martinique.
     */
    SDCIdCaptureRegionMartinique,
/**
     * Added in version 7.0.0
     *
     * Mauritius.
     */
    SDCIdCaptureRegionMauritius,
/**
     * Added in version 7.0.0
     *
     * Malawi.
     */
    SDCIdCaptureRegionMalawi,
/**
     * Added in version 7.0.0
     *
     * Malaysia.
     */
    SDCIdCaptureRegionMalaysia,
/**
     * Added in version 7.0.0
     *
     * Mayotte.
     *
     * Added in version 7.0.0
     *
     * Mayotte.
     */
    SDCIdCaptureRegionMayotte,
/**
     * Added in version 7.0.0
     *
     * Namibia.
     */
    SDCIdCaptureRegionNamibia,
/**
     * Added in version 7.0.0
     *
     * New Caledonia.
     */
    SDCIdCaptureRegionNewCaledonia,
/**
     * Added in version 7.0.0
     *
     * Niger.
     */
    SDCIdCaptureRegionNiger,
/**
     * Added in version 7.0.0
     *
     * Norfolk Island.
     */
    SDCIdCaptureRegionNorfolkIsland,
/**
     * Added in version 7.0.0
     *
     * Nigeria.
     */
    SDCIdCaptureRegionNigeria,
/**
     * Added in version 7.0.0
     *
     * Nicaragua.
     */
    SDCIdCaptureRegionNicaragua,
/**
     * Added in version 7.0.0
     *
     * Niue.
     */
    SDCIdCaptureRegionNiue,
/**
     * Added in version 7.0.0
     *
     * Kingdom of the Netherlands.
     */
    SDCIdCaptureRegionNetherlands,
/**
     * Added in version 7.0.0
     *
     * Norway.
     */
    SDCIdCaptureRegionNorway,
/**
     * Added in version 7.0.0
     *
     * Nepal.
     */
    SDCIdCaptureRegionNepal,
/**
     * Added in version 7.0.0
     *
     * Nauru.
     */
    SDCIdCaptureRegionNauru,
/**
     * Added in version 7.0.0
     *
     * New Zealand.
     */
    SDCIdCaptureRegionNewZealand,
/**
     * Added in version 7.0.0
     *
     * Oman.
     */
    SDCIdCaptureRegionOman,
/**
     * Added in version 7.0.0
     *
     * Pakistan.
     */
    SDCIdCaptureRegionPakistan,
/**
     * Added in version 7.0.0
     *
     * Panama.
     */
    SDCIdCaptureRegionPanama,
/**
     * Added in version 7.0.0
     *
     * Pitcairn.
     */
    SDCIdCaptureRegionPitcairn,
/**
     * Added in version 7.0.0
     *
     * Peru.
     */
    SDCIdCaptureRegionPeru,
/**
     * Added in version 7.0.0
     *
     * Philippines.
     */
    SDCIdCaptureRegionPhilippines,
/**
     * Added in version 7.0.0
     *
     * Palau.
     */
    SDCIdCaptureRegionPalau,
/**
     * Added in version 7.0.0
     *
     * Papua New Guinea.
     */
    SDCIdCaptureRegionPapuaNewGuinea,
/**
     * Added in version 7.0.0
     *
     * Poland.
     */
    SDCIdCaptureRegionPoland,
/**
     * Added in version 7.0.0
     *
     * Puerto Rico.
     */
    SDCIdCaptureRegionPuertoRico,
/**
     * Added in version 7.0.0
     *
     * Korea, Democratic People’s Republic of.
     */
    SDCIdCaptureRegionNorthKorea,
/**
     * Added in version 7.0.0
     *
     * Portugal.
     */
    SDCIdCaptureRegionPortugal,
/**
     * Added in version 7.0.0
     *
     * Paraguay.
     */
    SDCIdCaptureRegionParaguay,
/**
     * Added in version 7.0.0
     *
     * Palestine, State of.
     */
    SDCIdCaptureRegionPalestine,
/**
     * Added in version 7.0.0
     *
     * French Polynesia.
     */
    SDCIdCaptureRegionFrenchPolynesia,
/**
     * Added in version 7.0.0
     *
     * Qatar.
     */
    SDCIdCaptureRegionQatar,
/**
     * Added in version 7.0.0
     *
     * Réunion.
     */
    SDCIdCaptureRegionReunion,
/**
     * Added in version 7.0.0
     *
     * Romania.
     */
    SDCIdCaptureRegionRomania,
/**
     * Added in version 7.0.0
     *
     * Russian Federation.
     */
    SDCIdCaptureRegionRussia,
/**
     * Added in version 7.0.0
     *
     * Rwanda.
     */
    SDCIdCaptureRegionRwanda,
/**
     * Added in version 7.0.0
     *
     * Saudi Arabia.
     */
    SDCIdCaptureRegionSaudiArabia,
/**
     * Added in version 7.0.0
     *
     * Sudan.
     */
    SDCIdCaptureRegionSudan,
/**
     * Added in version 7.0.0
     *
     * Senegal.
     */
    SDCIdCaptureRegionSenegal,
/**
     * Added in version 7.0.0
     *
     * Singapore.
     */
    SDCIdCaptureRegionSingapore,
/**
     * Added in version 7.0.0
     *
     * South Georgia and the South Sandwich Islands.
     */
    SDCIdCaptureRegionSouthGeorgiaAndTheSouthSandwichIslands,
/**
     * Added in version 7.0.0
     *
     * Saint Helena, Ascension and Tristan da Cunha.
     */
    SDCIdCaptureRegionSaintHelena,
/**
     * Added in version 7.0.0
     *
     * Svalbard and Jan Mayen.
     */
    SDCIdCaptureRegionSvalbardAndJanMayen,
/**
     * Added in version 7.0.0
     *
     * Solomon Islands.
     */
    SDCIdCaptureRegionSolomonIslands,
/**
     * Added in version 7.0.0
     *
     * Sierra Leone.
     */
    SDCIdCaptureRegionSierraLeone,
/**
     * Added in version 7.0.0
     *
     * El Salvador.
     */
    SDCIdCaptureRegionElSalvador,
/**
     * Added in version 7.0.0
     *
     * San Marino.
     */
    SDCIdCaptureRegionSanMarino,
/**
     * Added in version 7.0.0
     *
     * Somalia.
     */
    SDCIdCaptureRegionSomalia,
/**
     * Added in version 7.0.0
     *
     * Saint Pierre and Miquelon.
     */
    SDCIdCaptureRegionSaintPierreAndMiquelon,
/**
     * Added in version 7.0.0
     *
     * Serbia.
     */
    SDCIdCaptureRegionSerbia,
/**
     * Added in version 7.0.0
     *
     * South Sudan.
     */
    SDCIdCaptureRegionSouthSudan,
/**
     * Added in version 7.0.0
     *
     * Sao Tome and Principe.
     */
    SDCIdCaptureRegionSaoTomeAndPrincipe,
/**
     * Added in version 7.0.0
     *
     * Suriname.
     */
    SDCIdCaptureRegionSuriname,
/**
     * Added in version 7.0.0
     *
     * Slovakia.
     */
    SDCIdCaptureRegionSlovakia,
/**
     * Added in version 7.0.0
     *
     * Slovenia.
     */
    SDCIdCaptureRegionSlovenia,
/**
     * Added in version 7.0.0
     *
     * Sweden.
     */
    SDCIdCaptureRegionSweden,
/**
     * Added in version 7.0.0
     *
     * Eswatini.
     */
    SDCIdCaptureRegionEswatini,
/**
     * Added in version 7.0.0
     *
     * Sint Maarten (Dutch part).
     */
    SDCIdCaptureRegionDutchSintMaarten,
/**
     * Added in version 7.0.0
     *
     * Seychelles.
     */
    SDCIdCaptureRegionSeychelles,
/**
     * Added in version 7.0.0
     *
     * Syrian Arab Republic.
     */
    SDCIdCaptureRegionSyria,
/**
     * Added in version 7.0.0
     *
     * Turks and Caicos Islands.
     */
    SDCIdCaptureRegionTurksAndCaicosIslands,
/**
     * Added in version 7.0.0
     *
     * Chad.
     */
    SDCIdCaptureRegionChad,
/**
     * Added in version 7.0.0
     *
     * Togo.
     */
    SDCIdCaptureRegionTogo,
/**
     * Added in version 7.0.0
     *
     * Thailand.
     */
    SDCIdCaptureRegionThailand,
/**
     * Added in version 7.0.0
     *
     * Tajikistan.
     */
    SDCIdCaptureRegionTajikistan,
/**
     * Added in version 7.0.0
     *
     * Tokelau.
     */
    SDCIdCaptureRegionTokelau,
/**
     * Added in version 7.0.0
     *
     * Turkmenistan.
     */
    SDCIdCaptureRegionTurkmenistan,
/**
     * Added in version 7.0.0
     *
     * Timor-Leste.
     */
    SDCIdCaptureRegionTimorLeste,
/**
     * Added in version 7.0.0
     *
     * Tonga.
     */
    SDCIdCaptureRegionTonga,
/**
     * Added in version 7.0.0
     *
     * Trinidad and Tobago.
     */
    SDCIdCaptureRegionTrinidadAndTobago,
/**
     * Added in version 7.0.0
     *
     * Tunisia.
     */
    SDCIdCaptureRegionTunisia,
/**
     * Added in version 7.0.0
     *
     * Türkiye.
     */
    SDCIdCaptureRegionTurkey,
/**
     * Added in version 7.0.0
     *
     * Tuvalu.
     */
    SDCIdCaptureRegionTuvalu,
/**
     * Added in version 7.0.0
     *
     * Taiwan, Province of China.
     */
    SDCIdCaptureRegionTaiwan,
/**
     * Added in version 7.0.0
     *
     * Tanzania, United Republic of.
     */
    SDCIdCaptureRegionTanzania,
/**
     * Added in version 7.0.0
     *
     * Uganda.
     */
    SDCIdCaptureRegionUganda,
/**
     * Added in version 7.0.0
     *
     * Ukraine.
     */
    SDCIdCaptureRegionUkraine,
/**
     * Added in version 7.0.0
     *
     * United States Minor Outlying Islands.
     */
    SDCIdCaptureRegionUsMinorOutlyingIslands,
/**
     * Added in version 7.0.0
     *
     * Uruguay.
     */
    SDCIdCaptureRegionUruguay,
/**
     * Added in version 7.0.0
     *
     * United States of America.
     */
    SDCIdCaptureRegionUs,
/**
     * Added in version 7.0.0
     *
     * Uzbekistan.
     */
    SDCIdCaptureRegionUzbekistan,
/**
     * Added in version 7.0.0
     *
     * Holy See.
     */
    SDCIdCaptureRegionHolySee,
/**
     * Added in version 7.0.0
     *
     * Saint Vincent and the Grenadines.
     */
    SDCIdCaptureRegionSaintVincentAndTheGrenadines,
/**
     * Added in version 7.0.0
     *
     * Venezuela (Bolivarian Republic of).
     */
    SDCIdCaptureRegionVenezuela,
/**
     * Added in version 7.0.0
     *
     * Virgin Islands (British).
     */
    SDCIdCaptureRegionBritishVirginIslands,
/**
     * Added in version 7.0.0
     *
     * Virgin Islands (U.S.).
     */
    SDCIdCaptureRegionUsVirginIslands,
/**
     * Added in version 7.0.0
     *
     * Viet Nam.
     */
    SDCIdCaptureRegionVietnam,
/**
     * Added in version 7.0.0
     *
     * Vanuatu.
     */
    SDCIdCaptureRegionVanuatu,
/**
     * Added in version 7.0.0
     *
     * Wallis and Futuna.
     */
    SDCIdCaptureRegionWallisAndFutuna,
/**
     * Added in version 7.0.0
     *
     * Samoa.
     */
    SDCIdCaptureRegionSamoa,
/**
     * Added in version 7.0.0
     *
     * Kosovo.
     */
    SDCIdCaptureRegionKosovo,
/**
     * Added in version 7.0.0
     *
     * Yemen.
     */
    SDCIdCaptureRegionYemen,
/**
     * Added in version 7.0.0
     *
     * South Africa.
     */
    SDCIdCaptureRegionSouthAfrica,
/**
     * Added in version 7.0.0
     *
     * Zambia.
     */
    SDCIdCaptureRegionZambia,
/**
     * Added in version 7.0.0
     *
     * Zimbabwe.
     */
    SDCIdCaptureRegionZimbabwe
} NS_SWIFT_NAME(IdCaptureRegion);

/**
 * Added in version 7.0.0
 *
 * Returns a name for the given SDCIdCaptureRegion.
 */
SDC_EXTERN NSString *_Nonnull SDCIdCaptureRegionToString(SDCIdCaptureRegion region);
/**
 * Added in version 7.0.0
 *
 * Returns all regions that can be scanned in ID Capture.
 */
SDC_EXTERN NSArray<NSNumber *> *_Nonnull SDCAllIdCaptureRegions(void);
