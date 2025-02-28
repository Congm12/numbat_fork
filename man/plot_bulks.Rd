% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/vis.R
\name{plot_bulks}
\alias{plot_bulks}
\title{plot a group of pseudobulks HMM profile}
\usage{
plot_bulks(bulks, ..., ncol = 1, title = TRUE)
}
\arguments{
\item{bulks}{dataframe Pseudobulk profiles annotated with "sample" column}

\item{...}{additional parameters passed to plot_psbulk()}

\item{ncol}{integer Number of columns}

\item{title}{logical Whether to add titles to individual plots}
}
\value{
a ggplot object
}
\description{
plot a group of pseudobulks HMM profile
}
