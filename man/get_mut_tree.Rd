% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/trees.R
\name{get_mut_tree}
\alias{get_mut_tree}
\title{Convert a single-cell phylogeny with mutation placements into a mutation graph}
\usage{
get_mut_tree(gtree, mut_nodes)
}
\arguments{
\item{gtree}{tbl_graph The single-cell phylogeny}

\item{mut_nodes}{dataframe Mutation placements}
}
\value{
igraph Mutation graph
}
\description{
Convert a single-cell phylogeny with mutation placements into a mutation graph
}
\keyword{internal}
