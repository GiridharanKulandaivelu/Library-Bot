s=serial('COM5','baudrate',9600);
fopen(s);
e=fscanf(s);
fclose(s);