# Libraries
library(ggplot2)
library(vegan)
library(ggpubr)
library(ggvegan)
# install.packages("remotes")
# remotes::install_github("gavinsimpson/ggvegan")

# Run NMDS

data(mite)
data("mite.env")

mite.hel = decostand(mite , method = "hellinger")
nmds1 = metaMDS(mite.hel , autotransform = F)
