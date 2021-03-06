% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/map_layer_geojson.R
\name{add_geojson}
\alias{add_geojson}
\title{Add Geojson}
\usage{
add_geojson(map, data = get_map_data(map), layer_id = NULL,
  stroke_colour = "#440154", fill_colour = "#440154", radius = 1,
  lineWidth = 1, light_settings = list(), elevation = 0,
  auto_highlight = FALSE, highlight_colour = "#AAFFFFFF")
}
\arguments{
\item{map}{a mapdeck map object}

\item{data}{data to be used in the layer}

\item{layer_id}{single value specifying an id for the layer. Use this value to
distinguish between shape layers of the same type. Layers with the same id are likely
to conflict and not plot correctly}

\item{radius}{radius of points in meters. See details}

\item{lineWidth}{width of lines in meters. See details}

\item{light_settings}{list of light setting parameters. See \link{light_settings}}

\item{elevation}{elevation of polygons. See details}

\item{auto_highlight}{logical indicating if the shape under the mouse should auto-highlight}

\item{highlight_colour}{hex string colour to use for highlighting. Must contain the alpha component.}

\item{lineColor}{hex value for all line colours. See details}

\item{fillColor}{hex value for all fill colours. See details}
}
\description{
The GeoJson Layer takes in GeoJson formatted data and renders it as interactive polygons,
lines and points
}
\details{
The GeoJSON string needs to have a \code{class} attribute of 'json'

If the GeoJSON contains the following fields in the \code{properties} object,
they will be used as the attribute properties for each feature.
Otherwise the values supplied to the arguments will be applied to all the features.

\itemize{
  \item{fillColor - fill colour of polygons and points}
  \item{lineColor - line colour of lines}
  \item{lineWidth - line width of lines}
  \item{elevation - elevation of polygons}
  \item{radius - radius of points}
}
}
\examples{
\donttest{

## You need a valid access token from Mapbox
key <- 'abc'

mapdeck(
 token = key
 , location = c(145, -37.9)
 , zoom = 8
 , style = "mapbox://styles/mapbox/dark-v9"
 , pitch = 35
) \%>\%
 add_geojson(
   data = geojson
   , layer_id = "geojson"
   , auto_highlight = TRUE
 )

## add colours, elevation and opacities
sf <- geojsonsf::geojson_sf(geojson)
sf$elevation <- sample(100:1000, size = nrow(sf), replace = T)
sf$fillOpacity <- sample(200:255, size = nrow(sf), replace = T)
sf$radius <- sample(1:100, size = nrow(sf), replace = T)

mapdeck(
  token = key
  , location = c(145, -37.9)
  , zoom = 8
  , style = "mapbox://styles/mapbox/dark-v9"
  , pitch = 35
) \%>\%
  add_geojson(
    data = sf
    , lineWidth = 250,
    , layer_id = "geojson"
 )
}


}
