app <- function(x, y){
  z <- x + y; w <- x * y
  if(z > w) t <- z
  else{t <- w; w <- z; z <- t}
  for(i in 1:10){ w <- w + i; z <- z - i}
  cat("z = ", z, "w= ", w, "?n")
  return (list(w, z))
}

app(2, 3)