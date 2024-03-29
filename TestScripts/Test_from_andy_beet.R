---
  output: github_document
---
  
  <!-- README.md is generated from README.Rmd. Please edit that file -->
  
  ```{r, include = FALSE}
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>",
  fig.path = "man/figures/README-",
  out.width = "100%"
)
```
# buoydata

<!-- badges: start -->
  ![deploy to github pages](https://github.com/NOAA-EDAB/buoydata/workflows/deploy%20to%20github%20pages/badge.svg)
![Install on windows](https://github.com/NOAA-EDAB/buoydata/workflows/Install%20on%20windows/badge.svg)
![gitleaks](https://github.com/NOAA-EDAB/buoydata/workflows/gitleaks/badge.svg)
<!-- badges: end -->
  
  The goal of `buoydata` is to easily download and process buoy data hosted by National Data Buoy Center. Note: the [rnoaa](https://github.com/ropensci/rnoaa) package also has functions to get buoy data. The difference is that (in [rnoaa](https://github.com/ropensci/rnoaa)) only one years worth of data can be downloaded at any time from a single buoy. 

`buoydata` downloads multiple years and stitches all years data together in a single data frame. In addition the lazily loaded station description data provided with the package combines many more attributes (than [rnoaa](https://github.com/ropensci/rnoaa)) by which to filter. 

*Date of most recent data pull: `r strsplit(as.character(file.info(here::here("data-raw","datapull.txt"))$ctime)," ")[[1]][1]`*
  
  ## Installation
  
  ``` r
remotes::install_github("andybeet/buoydata")
```

## Example

Find all buoys located between latitude [41,43] and longitude [-71,-67] with a time series of at least 20 years. Then pull and process data from a single buoy. 

``` {r, eval=T}
library(buoydata)
library(magrittr)

buoydata::buoyDataWorld %>% dplyr::filter(LAT > 41,LAT < 43) %>%
  dplyr::filter(LON > -71, LON < -69) %>%
  dplyr::filter(nYEARS >= 20)
```

``` r
# get the data for buoy 44013
get_buoy_data(buoyid="44013",year=1984:2019,outDir=here::here("output"))

# process sea surface temperature (celcius) into one large data frame
data <- combine_buoy_data(buoyid = "44013",variable="WTMP",inDir = here::here("output"))
```
Then plot the data

```{r plotData, echo = T,eval=F}
ggplot2::ggplot(data) +
  ggplot2::geom_line(ggplot2::aes(x=DATE,y=WTMP)) + 
  ggplot2::ylab("Sea Surface Temp (Celcius)") +
  ggplot2::xlab("")
```

<img src="man/figures/WTMP44013.png" align="center" width="100%"/>
  
  