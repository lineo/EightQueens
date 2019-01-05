program q8
  integer i,row,counter,p(8)
  row = 1; counter = 0; p(1) = 0
  do while (row>=1)
    if (p(row)<8) then
      p(row)=p(row)+1
      do i=1,row-1
        if (p(row)==p(i) .or. abs(row-i)==abs(p(row)-p(i))) exit;
      enddo
      if (i==row) then
        if (row>=8) then
          counter=counter+1
          write(*,'(1x,I4," :",8I3)') counter,p
        else
          row = row + 1
          p(row) = 0
        endif
      endif
    else
      row = row - 1
    endif
  enddo
end program q8
